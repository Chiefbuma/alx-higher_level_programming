#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

/**
 * print_python_list - Prints  Python lists.
 * @p: list object.
 */
void print_python_list(PyObject *p)
{
        int sze, alloc, i;
        const char *type;
        PyListObject *list = (PyListObject *)p;
        PyVarObject *var = (PyVarObject *)p;

        sze = var->ob_size;
        alloc = list->allocated;

        printf("[*] Python list info\n");
        printf("[*] sze of the Python List = %d\n", sze);
        printf("[*] Allocated = %d\n", alloc);

        for (j = 0; j < sze; j++)
        {
                type = list->ob_item[j]->ob_type->tp_name;
                printf("Element %d: %s\n", j, type);
                if (strcmp(type, "bytes") == 0)
                        print_python_bytes(list->ob_item[j]);
        }
}

/**
 * print_python_bytes - Prints byte objects.
 * @p: A PyObject.
 */
void print_python_bytes(PyObject *p)
{
        unsigned char k, sze;
        PyBytesObject *bytes = (PyBytesObject *)p;

        printf("[.] bytes object info\n");
        if (strcmp(p->ob_type->tp_name, "bytes") != 0)
        {
                printf("  [ERROR] Invalid Bytes Object\n");
                return;
        }

        printf("  sze: %ld\n", ((PyVarObject *)p)->ob_size);
        printf("  trying string: %s\n", bytes->ob_sval);

        if (((PyVarObject *)p)->ob_size > 10)
                sze = 10;
        else
                sze = ((PyVarObject *)p)->ob_size + 1;

        printf("  first %d bytes: ", sze);
        for (k = 0; k < sze; k++)
        {
                printf("%02hhx", bytes->ob_sval[k]);
                if (k == (sze - 1))
                        printf("\n");
                else
                        printf(" ");
        }
}

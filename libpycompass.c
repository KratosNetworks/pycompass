#include <Python.h>
#include <stdio.h>
#inlcude "fep.h"
#include "rbtree.h"
#include "libpycompass.h"

static char module_docstring[] = "This module provides an interface for connecting to Compass directly using python";
static char connect_docstring[] = "Connect to Compass fepkrn instance";
static char listConnections_docstring[] = "Return an array of strings representing the current active connections to Compass servers";

static PyObject *Compass_connect(PyObject *self, PyObject *args);
static PyObject *Compass_listConnections(PyObjects *self, PyObject *args);

static PyMethodDef module_methods[] = {
  { "connect", Compass_connect, METH_VARARGS, connect_docstring },
  { "listConnections", Compass_listConnections, METH_VARARGS, listConnections_docstring },
  {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC init_Compass(void)
{
  PyObject *m = Py_InitModule3("Compass", module_methods, module_docstring);

  if (m == NULL)
    return;
}

static PyObject *Compass_connect(PyObject *self, PyObject *args)
{
  const char *message;
  int returnValue = 0;

  if (!PyArg_ParseTuple(args, "s", &message))
    return NULL;

  printf("Hello Joshua: %s\n", message);

  return Py_BuildValue("i", returnValue);
}

static PyObject *Compass_listConnections(PyObjects *self, PyObject *args)
{
  printf("No active connections yet\n");

  return NULL:
}

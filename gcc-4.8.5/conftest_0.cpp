
// If defined, enforces linking againg PythonXXd.lib, which
// is usually not included in Python environments.
#undef _DEBUG
#include "Python.h"
int main()
{
  Py_Initialize();
  Py_Finalize();
  return 0;
}

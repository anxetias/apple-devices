// name: FUN_1001a85de
// address: 1001a85de

bool FUN_1001a85de(long *param_1,long *param_2)

{
  char cVar1;
  
  if (*param_1 == *param_2) {
    return true;
  }
  if (*param_2 == 0 || *param_1 == 0) {
    return false;
  }
  cVar1 = _CFEqual();
  return cVar1 != '\0';
}


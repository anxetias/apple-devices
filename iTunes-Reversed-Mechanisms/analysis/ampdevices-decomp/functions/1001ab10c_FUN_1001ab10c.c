// name: FUN_1001ab10c
// address: 1001ab10c

bool FUN_1001ab10c(long *param_1,long *param_2)

{
  char cVar1;
  
  if (*param_1 == *param_2) {
    return true;
  }
  if (*param_1 != 0) {
    cVar1 = _CFEqual();
    return cVar1 != '\0';
  }
  return false;
}


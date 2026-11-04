// name: FUN_1001a9000
// address: 1001a9000

bool FUN_1001a9000(long *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*param_1 != 0) {
    cVar1 = _CFDictionaryContainsKey(*param_1,*param_2);
    return cVar1 != '\0';
  }
  return false;
}


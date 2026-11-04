// name: FUN_1001aaf3c
// address: 1001aaf3c

void FUN_1001aaf3c(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    sVar1 = _strlen(param_2);
    uVar2 = _CFStringCreateWithBytes(0,param_2,sVar1,0x8000100,0);
  }
  *param_1 = uVar2;
  return;
}


// name: FUN_10015935e
// address: 10015935e

long FUN_10015935e(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 local_20;
  
  lVar2 = FUN_10015907a();
  if (lVar2 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_20,1);
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1001705fc(local_20);
    }
  }
  return lVar2;
}


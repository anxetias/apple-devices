// name: FUN_10029af6b
// address: 10029af6b

undefined8 FUN_10029af6b(undefined8 param_1,undefined4 *param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    do {
      if ((*(char *)((long)param_2 + 0x33) == '\0') &&
         (lVar1 = FUN_1004993ef(param_1,*param_2,0,1), lVar1 == 0)) {
        if (param_4 == 0) {
          return 1;
        }
        FUN_10015fadc(param_4,uVar2 & 0xffffffff);
        uVar3 = 1;
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 0x1e;
    } while (param_3 != uVar2);
  }
  return uVar3;
}


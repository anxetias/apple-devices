// name: FUN_1003ae8a5
// address: 1003ae8a5

undefined8
FUN_1003ae8a5(double param_1,long param_2,int param_3,char param_4,undefined4 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = 0xffffffce;
  if (param_3 < 0x4d425546) {
    if (param_3 == 0x44574e4c) {
      pvVar2 = (void *)FUN_1004aa9fa(param_2 + 0x2c);
      if (pvVar2 == (void *)0x0) {
        uVar1 = 0xffffffce;
      }
      else {
        _memcpy(local_450,pvVar2,0x420);
        uVar1 = FUN_1001d58b4(param_6,local_450,(int)param_4,param_5);
      }
    }
    else {
      if (param_3 == 0x46494c45) {
        if (((byte)(param_4 - 2U) < 3) && ((param_1 != 0.0 || (NAN(param_1))))) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
            uVar1 = FUN_100532b50(param_2 + 0x2c,(int)param_4,param_5,param_6);
            return uVar1;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          uVar1 = FUN_1001d58b4(param_6,param_2 + 0x2c,(int)param_4,param_5);
          return uVar1;
        }
        goto LAB_1003aea81;
      }
      if (param_3 == 0x48545450) {
LAB_1003ae923:
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          uVar1 = FUN_1001d5c41(param_6,param_2 + 0x30,*(undefined4 *)(param_2 + 0x2c),0);
          return uVar1;
        }
        goto LAB_1003aea81;
      }
    }
LAB_1003aea61:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      return uVar1;
    }
  }
  else {
    if (param_3 == 0x4d425546) {
      uVar1 = *(undefined8 *)(param_2 + 0x2c);
      uVar3 = *(ulong *)(param_2 + 0x34);
    }
    else {
      if (param_3 != 0x4d46494c) {
        if (param_3 == 0x53485244) goto LAB_1003ae923;
        goto LAB_1003aea61;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x450);
      uVar3 = (ulong)*(uint *)(param_2 + 0x458);
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      uVar1 = FUN_1001d5bb4(param_6,uVar1,uVar3);
      return uVar1;
    }
  }
LAB_1003aea81:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


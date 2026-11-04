// name: FUN_100638331
// address: 100638331

undefined8
FUN_100638331(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_470 [1096];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == '\0') {
    if (-1 < *(short *)(param_2 + 0x38)) {
      FUN_10053672c(param_1,param_2,local_470);
      cVar1 = FUN_100483d00(param_5 + 4,0x46494c45,local_470,0);
      if (cVar1 == '\0') {
        iVar2 = FUN_1001ceb24(param_5 + 0x38,0x7570726d,*(undefined4 *)(param_5 + 0x98),
                              0xffffffffffffffff,0);
      }
      else {
        iVar2 = FUN_100358c8d(local_470,param_5);
      }
      if (iVar2 == -0x80) {
        uVar3 = 0xffffff80;
        goto LAB_1006383ee;
      }
    }
  }
  else {
    iVar2 = FUN_10017fdd8(param_1,1,1,FUN_100638331,param_5);
    uVar3 = 0xffffff80;
    if (iVar2 == -0x80) goto LAB_1006383ee;
  }
  uVar3 = 0;
LAB_1006383ee:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}


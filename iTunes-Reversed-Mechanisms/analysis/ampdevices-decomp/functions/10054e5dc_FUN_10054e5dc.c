// name: FUN_10054e5dc
// address: 10054e5dc

undefined8 FUN_10054e5dc(undefined8 param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_138[0] = 0;
  FUN_100466c53(param_1,local_138);
  iVar1 = FUN_1001e20df(local_138);
  if (iVar1 != 0) {
    param_2 = iVar1;
  }
  if (param_2 == 0x4d345620 && param_4 != 0) {
    uVar2 = 0x4d345620;
  }
  else if (param_2 == 0x4d4f5650 && (char)param_4 != '\0') {
    uVar2 = 0x4d4f5650;
  }
  else {
    uVar3 = 0xffffffce;
    if (param_2 < 0x4d345020) {
      if (param_2 == 0x4d344120) {
        uVar2 = 0x4d344120;
      }
      else {
        if (param_2 != 0x4d344220) goto LAB_10054e664;
        uVar2 = 0x4d344220;
      }
    }
    else if (param_2 == 0x4d345220) {
      uVar2 = 0x4d345220;
    }
    else {
      if (param_2 != 0x4d345020) goto LAB_10054e664;
      uVar2 = 0x4d345020;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  uVar3 = 0;
LAB_10054e664:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


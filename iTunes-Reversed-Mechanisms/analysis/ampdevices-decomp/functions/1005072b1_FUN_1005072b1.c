// name: FUN_1005072b1
// address: 1005072b1

void FUN_1005072b1(long param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 *local_250;
  undefined1 local_248 [16];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  piVar4 = (int *)FUN_1005075d7(param_1,0);
  if (piVar4 != (int *)0x0) {
    if ((*piVar4 == 0x4f4c5354) && (piVar4[1] != 0)) {
      uVar6 = (*(long *)(piVar4 + 4) - *(long *)(piVar4 + 2)) / 0x38;
      uVar7 = (int)uVar6 == 1 ^ 0x10d60009;
    }
    else {
      uVar7 = 0x10d60009;
      uVar6 = 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x66b0);
    local_250 = param_2;
    uVar3 = FUN_10052a0d8(piVar4);
    uVar5 = FUN_10041708e(uVar1,uVar3,uVar7);
    FUN_1001b7eb0(local_2a0,uVar5);
    uVar5 = FUN_1005968ea(piVar4,0,0);
    FUN_100476ac1(local_290,uVar5);
    FUN_1004f0e83(param_1,local_238);
    FUN_1001b8dfc(local_248,local_238);
    FUN_1001b8e86(local_238,uVar6 & 0xffffffff,1);
    FUN_1001bc048(local_280,local_2a0,local_248,local_290,local_238);
    puVar2 = local_250;
    FUN_1001b7a50(local_238);
    FUN_1001b7a50(local_248);
    FUN_100507a6a(param_1,piVar4);
    FUN_100595344(piVar4);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 1;
    }
    if (*(char *)(param_1 + 0x14dc8) == '\0') {
      FUN_1001c334a(local_238,0x5db30003);
      FUN_1001b7b04(local_248,"");
      FUN_1001c334a(local_270,0x5db30014);
      FUN_1004fda52(local_260,*(undefined4 *)(param_1 + 0x28));
      FUN_10044fdb1(local_280,local_238,local_248,local_270,param_1 + 0x14dc8,local_260,0);
      FUN_1001b7a50(local_260);
      FUN_1001b7a50(local_270);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_238);
    }
    FUN_1001b7a50(local_280);
    FUN_1001b7a50(local_290);
    FUN_1001b7a50(local_2a0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


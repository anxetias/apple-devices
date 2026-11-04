// name: FUN_100546597
// address: 100546597

bool FUN_100546597(long param_1,long *param_2,int *param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  long local_2b8;
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined4 local_250 [4];
  undefined4 local_240;
  int local_23c;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [66];
  undefined4 local_19e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "copyTrackList != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    bVar11 = false;
    goto LAB_100546a6c;
  }
  FUN_1004f0e83(param_1,&local_238);
  FUN_1001b8dfc(local_2c8,&local_238);
  FUN_1001b7b04(local_2d8,param_1 + 0x14e90);
  lVar9 = *param_2;
  lVar6 = param_2[1];
  local_2b8 = lVar9;
  if (lVar9 == lVar6) {
    uVar10 = 0;
    lVar6 = lVar9;
    iVar8 = *(int *)(param_1 + 0x66b0);
  }
  else {
    uVar10 = 0;
    local_23c = *(int *)(param_1 + 0x66b0);
    do {
      uVar3 = FUN_10052a034(*(undefined4 *)(lVar9 + 0x167c));
      uVar3 = uVar3 | uVar10;
      uVar10 = uVar3 & 0xffffff0f | 0x10;
      if ((uVar3 & 0xf0 & (uVar3 & 0xf0) - 1) == 0) {
        uVar10 = uVar3;
      }
      lVar9 = lVar9 + 0x4cec;
      iVar8 = local_23c;
    } while (lVar9 != lVar6);
  }
  if (param_3 == (int *)0x0) {
    local_240 = 0;
    FUN_1001b7b04(local_270,"");
    local_23c = 0;
  }
  else {
    local_23c = 0;
    if ((*param_3 == 0x4f4c5354) && (param_3[1] != 0)) {
      local_23c = (int)((ulong)(*(long *)(param_3 + 4) - *(long *)(param_3 + 2)) >> 3) * -0x49249249
      ;
    }
    local_240 = FUN_10052a0d8(param_3);
    uVar4 = FUN_1005968ea(param_3,0,0);
    FUN_100476ac1(local_270,uVar4);
  }
  iVar5 = (int)((ulong)(lVar6 - local_2b8) >> 2) * -0x6de0b20d;
  if (iVar5 == 0) {
    FUN_1001b7b04(local_2a0,"");
  }
  else {
    FUN_1001b8dfc(local_2a0,*param_2 + 8);
  }
  FUN_1001b7a44(local_290);
  FUN_1001b7a44(local_280);
  uVar4 = FUN_100416f20(iVar8,0x10cc021d);
  FUN_1001b7eb0(local_260,uVar4);
  FUN_1001bbec4(local_2b0,local_260,local_2c8);
  if (iVar5 == 1) {
    uVar4 = FUN_10041708e(iVar8,uVar10,0x10d60005);
    iVar5 = local_23c;
    FUN_1001b81f2(local_260,uVar4);
    FUN_1001bbec4(&local_238,local_260,local_2a0);
    FUN_1001b80b2(local_290,&local_238);
    FUN_1001b7a50(&local_238);
  }
  else {
    uVar4 = FUN_10041708e(iVar8,uVar10,0x10d60006);
    iVar5 = local_23c;
    FUN_1001b81f2(local_290,uVar4);
  }
  FUN_1001bbcfe(local_2b0,local_290);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uVar4 = FUN_10041708e(iVar8,local_240,0x10d6000a);
      FUN_1001b81f2(local_260,uVar4);
      cVar1 = FUN_1001b8428(local_260);
      if (cVar1 != '\0') goto LAB_10054688e;
      FUN_1001bbec4(&local_238,local_260,local_270);
      FUN_1001b80b2(local_280,&local_238);
      puVar7 = &local_238;
    }
    else {
LAB_10054688e:
      uVar4 = FUN_10041708e(iVar8,local_240,0x10d60007);
      FUN_1001b81f2(local_260,uVar4);
      FUN_1001b8e86(local_250,iVar5,1);
      FUN_1001bbf68(&local_238,local_260,local_250,local_270);
      FUN_1001b80b2(local_280,&local_238);
      FUN_1001b7a50(&local_238);
      puVar7 = local_250;
    }
    FUN_1001b7a50(puVar7);
  }
  FUN_10044eef2(&local_238);
  FUN_1001b8172(local_210,local_2b0);
  FUN_1001b8172(local_200,local_280);
  local_234 = (char *)CONCAT44(local_234._4_4_,8);
  FUN_1001c334a(local_250,0x5db3000e);
  FUN_1001b80b2(local_1f0,local_250);
  FUN_1001b7a50(local_250);
  FUN_1001c334a(local_250,0x5db30004);
  FUN_1001b80b2(local_1e0,local_250);
  FUN_1001b7a50(local_250);
  local_19e = 0x20002;
  sVar2 = FUN_10044f1a0();
  FUN_10020dfaa(&local_238);
  FUN_1001b7a50(local_2b0);
  FUN_1001b7a50(local_260);
  FUN_1001b7a50(local_280);
  FUN_1001b7a50(local_290);
  bVar11 = sVar2 == 1;
  FUN_1001b7a50(local_2a0);
  FUN_1001b7a50(local_270);
  FUN_1001b7a50(local_2d8);
  FUN_1001b7a50(local_2c8);
LAB_100546a6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar11;
}


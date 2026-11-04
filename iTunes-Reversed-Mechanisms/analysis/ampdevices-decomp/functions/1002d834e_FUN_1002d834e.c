// name: FUN_1002d834e
// address: 1002d834e

int FUN_1002d834e(long param_1,char param_2,undefined4 param_3,long *param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  RSA *r;
  long *plVar6;
  int *piVar7;
  long lVar8;
  uint local_b34;
  uint local_b30;
  undefined4 local_b2c;
  long local_b28;
  long local_b20;
  long *local_b18;
  int local_b10;
  int local_b0c;
  int local_b08;
  char *local_b04;
  undefined2 local_afc;
  char *local_afa;
  undefined1 local_ab8 [190];
  undefined1 local_9fa [866];
  undefined1 local_698 [1576];
  undefined4 local_70;
  undefined1 local_6c [20];
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b28 = 0;
  local_b10 = 0;
  local_b20 = 0;
  local_b0c = 0;
  *param_4 = 0;
  *param_5 = 0;
  local_b2c = param_3;
  iVar2 = FUN_10041503c(0,param_4,0);
  if (iVar2 == -0x80) goto LAB_1002d88bb;
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_b08 = 0x8220202;
      local_b04 = "Assertion failure";
      local_afc = 0x400;
      local_afa = (char *)CONCAT44(local_afa._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_b08,0x12);
    }
    goto LAB_1002d88bb;
  }
  local_b18 = param_4;
  FUN_1001c62d9(&local_70,0x18);
  local_70 = *(undefined4 *)(param_1 + 0x71b4);
  FUN_1001c631b(param_1 + 0x71a0,local_6c);
  plVar6 = local_b18;
  local_b30 = (uint)*(ushort *)(param_1 + 0x40a);
  if (*(ushort *)(param_1 + 0x40a) == 0) {
    local_b34 = 0;
    local_b30 = 1;
  }
  else {
    local_b34 = (uint)*(ushort *)(param_1 + 0x408);
  }
  cVar1 = (param_2 != '\0') + '\x02';
  if (*(char *)(param_1 + 0x6abf) == '\0') {
    cVar1 = param_2 != '\0';
  }
  if (*(char *)(param_1 + 0x338) == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x3e0 + (ulong)(*(char *)(param_1 + 0x336) != '\0') * 4);
    r = (RSA *)FUN_1002d8ab2(uVar3);
    if (r == (RSA *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "devicePublicKeyRSA != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
      plVar6 = local_b18;
    }
    else {
      FUN_1001c62d9(&local_b08,0x210);
      local_b04 = (char *)CONCAT44(local_b04._4_4_,uVar3);
      local_b08 = _RSA_size(r);
      local_b04 = (char *)((ulong)local_b04 & 0xffffffff);
      FUN_1002d8b31(r->n,&local_afc);
      FUN_1002d8b31(r->e,local_9fa);
      _RSA_free(r);
      plVar6 = local_b18;
      uVar3 = FUN_10041576c(*local_b18);
      iVar2 = FUN_10003ac60(uVar3,&local_b08,&local_70,&local_b34,cVar1,param_5);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) goto LAB_1002d8636;
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          piVar7 = &local_58;
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          goto LAB_1002d89b2;
        }
      }
    }
LAB_1002d888a:
    lVar8 = 0;
  }
  else if (*(long *)(param_1 + 0x71b8) == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_b08 = 0x8220202;
      local_b04 = "Assertion failure";
      local_afc = 0x822;
      local_afa = "handlerData->fairPlayCertificateChain != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_b08,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    lVar8 = 0;
  }
  else {
    uVar3 = FUN_10041576c(*local_b18);
    uVar5 = FUN_100170f3b(*(undefined8 *)(param_1 + 0x71b8));
    uVar4 = FUN_100170ef7(*(undefined8 *)(param_1 + 0x71b8));
    iVar2 = FUN_1001034c0(uVar3,uVar5,uVar4,&local_70,&local_b34,cVar1,param_5);
    plVar6 = local_b18;
    if (iVar2 == -0x80) {
      lVar8 = 0;
    }
    else {
      if (iVar2 != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          piVar7 = &local_b08;
          local_b08 = 0x8220202;
          local_b04 = "Assertion failure";
          local_afc = 0x400;
          local_afa = (char *)CONCAT44(local_afa._4_4_,iVar2);
LAB_1002d89b2:
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",piVar7,0x12);
        }
        goto LAB_1002d888a;
      }
LAB_1002d8636:
      if ((char)local_b2c == '\0') {
        iVar2 = 0;
        lVar8 = 0;
        goto LAB_1002d888d;
      }
      FUN_1001c62d9(&local_b08,0xa98);
      FUN_1001e04f5("IC-Info.sidb",local_698);
      _memcpy(local_ab8,(void *)(param_1 + 0x75e0),0x420);
      iVar2 = FUN_1002d8b65(&local_b08,&local_b28,&local_b10);
      if (iVar2 == 0) {
        FUN_1001e04f5("IC-Info.sidd",local_698);
        _memcpy(local_ab8,(void *)(param_1 + 0x75e0),0x420);
        iVar2 = FUN_1002d8b65(&local_b08,&local_b20,&local_b0c);
        if (iVar2 != 0) goto LAB_1002d86e2;
      }
      else {
LAB_1002d86e2:
        FUN_1000bfd00(local_b28);
        local_b28 = 0;
        local_b10 = 0;
        FUN_1000bfd00(local_b20);
        local_b20 = 0;
        local_b0c = 0;
      }
      plVar6 = local_b18;
      if ((local_b10 == 0) && (local_b28 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(keybagSize != 0) || (keybagData == nullptr)";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (local_b20 != 0 && local_b0c == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(diversityBagSize != 0) || (diversityBagData == nullptr)";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = FUN_1000a52e0(*param_5,local_b28,local_b10,local_b20,local_b0c);
      lVar8 = local_b28;
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        lVar8 = local_b28;
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          lVar8 = local_b28;
        }
      }
    }
  }
LAB_1002d888d:
  FUN_1000bfd00(lVar8);
  FUN_1000bfd00(local_b20);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else if (*plVar6 != 0) {
    FUN_1004152d5(plVar6,0);
  }
LAB_1002d88bb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


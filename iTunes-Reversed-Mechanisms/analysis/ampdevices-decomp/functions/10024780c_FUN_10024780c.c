// name: FUN_10024780c
// address: 10024780c

int FUN_10024780c(void *param_1,undefined8 param_2,int param_3,void *param_4,undefined2 *param_5)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 local_ab0;
  undefined2 local_aac;
  char local_aa9;
  undefined2 local_aa8;
  undefined2 local_aa6;
  undefined2 local_aa4;
  undefined4 local_8a8;
  char *local_8a4;
  undefined2 local_89c;
  char *local_89a;
  ushort local_6a8 [260];
  undefined1 local_4a0 [1058];
  short sStack_7e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined2 *)0x0) {
    *param_5 = 0;
  }
  iVar4 = FUN_10017e137(param_1,local_4a0,local_6a8);
  if (iVar4 != 0) goto LAB_100247869;
  iVar4 = FUN_100181e82(local_4a0);
  if (iVar4 == 2) {
    lVar5 = FUN_10036f781(param_1);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_8a8 = 0x8220202;
        local_8a4 = "Assertion failure";
        local_89c = 0x822;
        local_89a = "mobileDeviceRef != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_8a8,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = -0x32;
    }
    else {
      iVar4 = FUN_1005bc68e(lVar5,param_2);
      if (iVar4 == 0) {
        if (param_5 != (undefined2 *)0x0) {
          FUN_1001e1c39(param_2,param_5);
        }
        if (param_4 != (void *)0x0) {
          _memcpy(param_4,param_1,0x420);
        }
      }
      FUN_10017060f(lVar5);
    }
    goto LAB_100247869;
  }
  if (param_5 != (undefined2 *)0x0) {
    FUN_1001e1c39(local_6a8,param_5);
  }
  iVar4 = 0;
  cVar2 = FUN_1001e3edc(local_6a8,param_2,0);
  if (cVar2 != '\0') goto LAB_100247869;
  FUN_10017ee8d(param_1,param_2,local_6a8);
  if (0x1a < local_6a8[0]) {
    local_6a8[0] = 0x1a;
  }
  bVar1 = (short)stack0xffffffffffffff80 == 0x4953;
  bVar9 = sStack_7e == 0x4244 && bVar1;
  if (sStack_7e == 0x4244 && bVar1) {
    local_aa9 = bVar9;
    FUN_10017e3e5(local_6a8);
    iVar4 = 0;
    local_aac = 0x5f;
LAB_1002479ee:
    local_ab0 = 0;
    FUN_1001e1c39(local_6a8,&local_8a8);
    FUN_1001dff8d(&local_8a8,0x20);
    pcVar7 = "iPod";
    if (param_3 == 0x69506164) {
      pcVar7 = "iPad";
    }
    pcVar8 = "iPhone";
    if (param_3 != 0x6950686e) {
      pcVar8 = pcVar7;
    }
    FUN_1001e04f5(pcVar8,&local_aa8);
    FUN_1001e0295(&local_8a8,&local_aa8,&local_ab0);
    local_aa8 = 2;
    local_aa6 = local_aac;
    local_aa4 = 0x73;
    FUN_1001e0295(&local_8a8,&local_aa8,&local_ab0);
    FUN_10017e3e5();
    FUN_1001dff8d(&local_8a8,0x5f);
    if ((short)local_8a8 == 0) {
      FUN_1001e04f5(pcVar8,local_6a8);
    }
    else {
      if (local_aa9 != '\0') {
        iVar4 = FUN_100189fe6(param_1,local_6a8);
      }
      if ((iVar4 == -0x25) || (iVar4 == -0x582)) {
        FUN_1001e1c39(local_6a8,&local_8a8);
        uVar3 = (short)local_8a8 - 1;
        local_8a8 = CONCAT22(local_8a8._2_2_,uVar3);
        while (1 < uVar3) {
          iVar4 = FUN_100189fe6(param_1,&local_8a8);
          if ((iVar4 != -0x25) && (iVar4 != -0x582)) goto LAB_100247b4e;
          uVar3 = (short)local_8a8 - 1;
          local_8a8 = CONCAT22(local_8a8._2_2_,uVar3);
        }
      }
      else {
LAB_100247b4e:
        if (iVar4 == 0) goto LAB_100247b9c;
      }
      FUN_10017e3e5(local_6a8);
      iVar4 = FUN_100189fe6(param_1,&local_8a8);
      if ((iVar4 == 0) || (local_6a8[0] < 0xc)) goto LAB_100247b9f;
      local_6a8[0] = 0xb;
    }
    iVar4 = FUN_100189fe6(param_1,local_6a8);
  }
  else {
    iVar4 = FUN_100189fe6(param_1,local_6a8);
    if (iVar4 != 0) {
      local_aac = 0x2019;
      local_aa9 = bVar9;
      goto LAB_1002479ee;
    }
LAB_100247b9c:
    iVar4 = 0;
  }
LAB_100247b9f:
  FUN_1001727b4(DAT_10070e568,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118,0);
  if ((param_4 != (void *)0x0 && iVar4 == 0) &&
     (iVar4 = FUN_10017e137(param_1,local_4a0,param_5), iVar4 == 0)) {
    _memcpy(param_4,local_4a0,0x420);
    iVar4 = 0;
  }
LAB_100247869:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


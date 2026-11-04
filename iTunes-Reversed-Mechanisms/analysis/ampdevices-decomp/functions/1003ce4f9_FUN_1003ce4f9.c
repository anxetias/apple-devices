// name: FUN_1003ce4f9
// address: 1003ce4f9

int FUN_1003ce4f9(undefined8 param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_51dc [5728];
  undefined1 local_3b7c [68];
  undefined1 local_3b38 [24];
  undefined1 local_3b20 [16];
  undefined1 local_3b10 [16];
  undefined1 local_3b00 [16];
  undefined1 local_3af0 [16];
  undefined1 local_3ae0 [16];
  undefined1 local_3ad0 [20];
  int local_3abc;
  ulong local_3ab8;
  ulong uStack_3ab0;
  undefined1 local_39f0 [512];
  undefined1 local_37f0 [13192];
  undefined1 local_468 [1056];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = 0x1003ce50e;
  lVar5 = FUN_100108310();
  lVar5 = -lVar5;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3ab8 = 0;
  uStack_3ab0 = 0;
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce53b;
  FUN_1002ecb9c(local_3b38);
  if (param_2 == (long *)0x0) {
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce72f;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce73f;
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "metaData != nullptr";
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce85e;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce756;
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_1003ce99e;
  }
  *param_2 = 0;
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce553;
  lVar6 = FUN_1004de5ab(param_1);
  iVar4 = -0x2b;
  if (lVar6 == 0) goto LAB_1003ce99e;
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce56f;
  lVar6 = FUN_1003cc68c(lVar6,param_1,0);
  if (lVar6 == 0) {
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce760;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce770;
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "assetInfoDict != nullptr";
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce8fd;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce781;
    FUN_1001782e9(0,0);
    goto LAB_1003ce99e;
  }
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce58a;
  iVar3 = FUN_10017d5ba(param_1,local_468);
  iVar4 = iVar3;
  local_3abc = iVar3;
  if (iVar3 == -0x80) goto LAB_1003ce99e;
  if (iVar3 != 0) {
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce78b;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce79b;
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    iVar4 = local_3abc;
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce7e5;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      iVar4 = local_3abc;
    }
    goto LAB_1003ce99e;
  }
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce5bb;
  lVar6 = FUN_1003ce0ca(lVar6,local_468,&local_3abc);
  if (lVar6 == 0) {
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce7ef;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce7ff;
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "metadataDict != nullptr";
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003cea57;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce810;
    FUN_1001782e9(0,0);
    iVar4 = local_3abc;
    goto LAB_1003ce99e;
  }
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce5d3;
  FUN_1003af743(local_51dc);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce5df;
  FUN_1003af7fe(&local_3ab8);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce5eb;
  FUN_1003af8bd(local_3b7c);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce60d;
  iVar4 = FUN_10032b890(lVar6,0,local_51dc,&local_3ab8,local_3b7c,0);
  local_3abc = iVar4;
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce637;
      iVar4 = FUN_1003ce1b2(lVar6,local_3b38);
      if (iVar4 == 0) {
        *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce64e;
        FUN_1001bb41a(local_3b10,local_39f0);
        local_3ab8 = local_3ab8 | 0x400;
        *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce664;
        cVar2 = FUN_1001b8428(local_3b00);
        if (cVar2 == '\0') {
          *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce677;
          FUN_1001bb41a(local_3b00,local_37f0);
          uStack_3ab0 = uStack_3ab0 | 2;
        }
      }
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce686;
      iVar4 = FUN_1001c861c(param_2);
      local_3abc = iVar4;
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          lVar1 = *param_2;
          *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce6be;
          iVar4 = FUN_1003b07e0(local_51dc,&local_3ab8,local_3b7c,lVar1);
          local_3abc = iVar4;
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce6de;
            uVar7 = FUN_1001cc310();
            *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce6ee;
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
              goto LAB_1003ce94a;
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce907;
          uVar7 = FUN_1001cc310();
          *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce917;
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_1003ce94a:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce95d;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce868;
      uVar7 = FUN_1001cc310();
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce878;
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
        goto LAB_1003ce94a;
      }
    }
  }
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce965;
  FUN_10017060f(lVar6);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce971;
  FUN_1003ae783(local_3b7c);
  if (local_3abc == 0) {
    iVar4 = 0;
  }
  else {
    lVar6 = *param_2;
    iVar4 = local_3abc;
    if (lVar6 != 0) {
      *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce990;
      FUN_1001c8d4b(lVar6,0);
      *param_2 = 0;
      iVar4 = local_3abc;
    }
  }
LAB_1003ce99e:
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce9aa;
  FUN_1001b7a50(local_3ad0);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce9b6;
  FUN_1001b7a50(local_3ae0);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce9c2;
  FUN_1001b7a50(local_3af0);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce9ce;
  FUN_1001b7a50(local_3b00);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce9da;
  FUN_1001b7a50(local_3b10);
  *(undefined8 *)((long)&local_30 + lVar5) = 0x1003ce9e6;
  FUN_1001b7a50(local_3b20);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_30 + lVar5) = &UNK_1003cea61;
    ___stack_chk_fail();
  }
  return iVar4;
}


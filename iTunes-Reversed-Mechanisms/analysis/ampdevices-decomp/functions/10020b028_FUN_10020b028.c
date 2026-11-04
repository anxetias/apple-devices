// name: FUN_10020b028
// address: 10020b028

/* WARNING: Removing unreachable block (ram,0x00010020b166) */

ulong FUN_10020b028(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_468 [1056];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1001668a7(param_1,&cf_Is32BitOnly);
  if (lVar4 != 0) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      uVar5 = _CFBooleanGetValue(lVar4);
      return uVar5;
    }
    goto LAB_10020b280;
  }
  cVar1 = FUN_1001681c8(param_1,&cf_Location,local_468);
  if (cVar1 == '\0') {
LAB_10020b172:
    bVar2 = 0;
  }
  else {
    iVar3 = FUN_1001f7388(local_468,1);
    if (iVar3 == -0x80) {
LAB_10020b142:
      lVar4 = 0;
LAB_10020b147:
      lVar6 = 0;
      cVar1 = '\0';
    }
    else {
      if (iVar3 != 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        goto LAB_10020b142;
      }
      local_48 = 0;
      uStack_44 = 0;
      FUN_1001fbd49(0,"iTunesMetadata.plist",0,&local_48);
      lVar4 = CONCAT44(uStack_44,local_48);
      if ((lVar4 == 0) || (lVar6 = FUN_1001668a7(lVar4,&cf_is32BitOnly), lVar6 == 0)) {
        lVar6 = FUN_10020d28b(0);
        if (lVar6 != 0) {
          cVar1 = FUN_10020d3f4(0,lVar6);
          goto LAB_10020b14a;
        }
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = "bundleInfoDict != __null";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10020b147;
      }
      cVar1 = FUN_100171f12(lVar6);
      cVar1 = cVar1 != '\0';
      lVar6 = 0;
    }
LAB_10020b14a:
    FUN_10017060f(lVar6);
    FUN_10017060f(lVar4);
    bVar2 = 1;
    if (cVar1 == '\0') goto LAB_10020b172;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return (ulong)bVar2;
  }
LAB_10020b280:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


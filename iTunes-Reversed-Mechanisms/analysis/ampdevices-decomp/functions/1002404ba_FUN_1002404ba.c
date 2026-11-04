// name: FUN_1002404ba
// address: 1002404ba

ulong FUN_1002404ba(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *unaff_R14;
  ulong uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 4);
  if (*(long *)(param_1 + 2) == 0) {
    if (lVar3 != 0) goto LAB_1002404fe;
    iVar2 = param_1[6];
    if (iVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = 
        "(inFindParams->playlistItem != __null) || (inFindParams->trackInstance != __null) || (inFindParams->trackKind != 0)"
        ;
        goto LAB_100240815;
      }
      goto LAB_10024083a;
    }
    if ((char)param_1[0x115] == '\0') goto LAB_10024065c;
    goto LAB_10024051a;
  }
  if (lVar3 == 0) {
    lVar3 = FUN_10024093e();
    *(long *)(param_1 + 4) = lVar3;
  }
LAB_1002404fe:
  iVar2 = param_1[6];
  if (iVar2 == 0) {
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "inFindParams->trackInstance != __null";
LAB_100240815:
        local_3c = 0x822;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
    }
    else {
      if (*(long *)(lVar3 + 8) != 0) {
        iVar2 = *(int *)(lVar3 + 0x3c);
        param_1[6] = iVar2;
        goto LAB_10024050d;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "inFindParams->trackInstance->trackInfo != __null";
        goto LAB_100240815;
      }
    }
LAB_10024083a:
    uVar5 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10024085c;
  }
LAB_10024050d:
  if ((char)param_1[0x115] == '\0') {
    if (lVar3 == 0) {
LAB_10024065c:
      if ((char)param_1[7] == '\0') {
        unaff_R14 = (int *)FUN_1001cc310();
        cVar1 = _os_log_type_enabled(unaff_R14,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "inFindParams->haveCanPlayLocation";
          __os_log_error_impl(0x100000000,unaff_R14,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = param_1[6];
      }
      if (iVar2 != 0x46494c45) {
        unaff_R14 = (int *)FUN_1001cc310();
        cVar1 = _os_log_type_enabled(unaff_R14,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "inFindParams->trackKind == kITFileKind";
          __os_log_error_impl(0x100000000,unaff_R14,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_10024051a;
    }
    if (*(char *)(lVar3 + 0x44) == '\x01') {
LAB_100240882:
      FUN_1002b3b9a(lVar3,param_1 + 0x116);
      *(undefined1 *)(param_1 + 0x115) = 1;
      goto LAB_10024051a;
    }
    if (*(char *)(lVar3 + 0x44) == '\x02') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = 
        "inFindParams->trackInstance->locationStatus != kTrackLocationStatus_InvalidNoRetry";
        goto LAB_100240815;
      }
      goto LAB_10024083a;
    }
    iVar2 = FUN_1002b0559(lVar3,0x82);
    if (iVar2 == 0) {
      lVar3 = *(long *)(param_1 + 4);
      goto LAB_100240882;
    }
  }
  else {
LAB_10024051a:
    if ((char)param_1[7] != '\0') {
LAB_100240524:
      if (param_1[0x22f] == 0) {
        unaff_R14 = param_1 + 0x22f;
        if ((*(long *)(param_1 + 4) == 0) ||
           ((*(byte *)(*(long *)(*(long *)(param_1 + 4) + 8) + 0xc3) & 0x40) == 0)) {
          iVar2 = FUN_1003b73be(param_1[6],param_1 + 0x116,param_1 + 8,unaff_R14);
          param_1[0x22e] = iVar2;
          if ((param_1[0x22f] != 0) || (*(long *)(param_1 + 4) == 0)) goto LAB_1002407c1;
          iVar2 = *(int *)(*(long *)(param_1 + 4) + 0x40);
        }
        else {
          param_1[0x22e] = 0x4d344120;
          iVar2 = 0x4d344120;
        }
        *unaff_R14 = iVar2;
      }
LAB_1002407c1:
      uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
      if (*param_1 == 0) {
        *param_1 = 0xf;
      }
      goto LAB_10024085c;
    }
    iVar2 = FUN_1003b75af(param_1[6],param_1 + 0x116,param_1 + 8);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 7) = 1;
        unaff_R14 = (int *)0x0;
        goto LAB_100240524;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  uVar5 = 0;
LAB_10024085c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
}


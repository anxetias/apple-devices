// name: FUN_100397ff1
// address: 100397ff1

void FUN_100397ff1(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int in_ECX;
  undefined8 in_R8;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  uint local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar10 = FUN_1004de449(in_R8);
  if (lVar10 == 0) {
    uVar12 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar12,0x10);
    if (cVar7 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10039836f;
  }
  FUN_1001aa318(&local_490);
  FUN_1001aa318(&local_488);
  if (in_ECX != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar12 = DAT_1008c75b8;
    cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar7 != '\0') {
      local_458 = 0x4000100;
      local_454 = (char *)CONCAT44(local_454._4_4_,in_ECX);
      __os_log_impl(0x100000000,uVar12,1,"airtraffic> photo copy file completion proc: error %d",
                    &local_458,8);
    }
  }
  FUN_100238ca8(&local_478,lVar10 + 0x16878);
  lVar11 = *(long *)(lVar10 + 0x168c0);
  if (*(long *)(lVar11 + 0x10) == 0) {
    if (((in_ECX != -0x80) && (in_ECX != -0x22)) && (in_ECX != 0x488)) {
      uVar12 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar12,0x10);
      if (cVar7 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = 
        "handlerData->airTrafficPhotoAssetPromisedFileItemList->empty() == false || copyStatus == userCanceledErr || copyStatus == dskFulErr || copyStatus == kAirTrafficNoMorePhotoAssetsErr"
        ;
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      lVar11 = *(long *)(lVar10 + 0x168c0);
      if (*(long *)(lVar11 + 0x10) != 0) goto LAB_1003980c3;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar12 = DAT_1008c75b8;
    cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar7 != '\0') {
      local_458 = local_458 & 0xffff0000;
      __os_log_impl(0x100000000,uVar12,1,
                    "airtraffic> photo copy file completion proc: empty promised file item list!",
                    &local_458,2);
    }
    FUN_10015a142(&local_478);
    local_480 = (ulong)local_480._4_4_ << 0x20;
    bVar4 = true;
    uVar8 = 0;
    uVar5 = 0;
    bVar6 = bVar4;
    if (in_ECX == -0x22) goto LAB_100398246;
LAB_100398251:
    uVar8 = uVar5;
    FUN_100394a78(lVar10,0);
  }
  else {
LAB_1003980c3:
    lVar11 = *(long *)(lVar11 + 8);
    uVar8 = *(undefined4 *)(lVar11 + 0x878);
    FUN_1001a8c4a(&local_490,lVar11 + 0x880);
    uVar12 = FUN_1001a8c4a(&local_488,lVar11 + 0x888);
    local_480 = CONCAT44(local_480._4_4_,
                         (int)CONCAT71((int7)((ulong)uVar12 >> 8),*(undefined1 *)(lVar11 + 0x440)));
    lVar11 = *(long *)(lVar10 + 0x168c0);
    plVar1 = *(long **)(lVar11 + 8);
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    plVar3 = (long *)(lVar11 + 0x10);
    *plVar3 = *plVar3 + -1;
    FUN_10034c12e(plVar1 + 2);
    operator_delete(plVar1);
    FUN_10015a142(&local_478);
    bVar4 = false;
    bVar6 = false;
    if (in_ECX == -0x22) {
LAB_100398246:
      bVar4 = bVar6;
      *(undefined1 *)(lVar10 + 0x168cd) = 1;
      uVar5 = uVar8;
      goto LAB_100398251;
    }
  }
  if ((!bVar4) && ((char)local_480 == '\0')) {
    local_480 = FUN_1004983e2(*(undefined8 *)(lVar10 + 0x16860),uVar8);
    if (local_480 == 0) {
      uVar12 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar12,0x10);
      if (cVar7 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "imageInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      iVar9 = 1;
      FUN_1001782e9(0,0);
LAB_1003982d0:
      uVar8 = FUN_10032f3b4(in_ECX);
      do {
        uVar12 = 0;
        if (in_ECX == 0) {
          uVar12 = local_488;
        }
        FUN_10032f806(lVar10,local_490,&cf_Photo,uVar12,0,0,uVar8,0);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    else {
      iVar9 = *(int *)(local_480 + 0xd0);
      if (iVar9 != 0) goto LAB_1003982d0;
    }
    lVar10 = FUN_1004993ef(local_480,9,0,1);
    if (lVar10 != 0) {
      iVar9 = FUN_10049980b(lVar10,&local_458,0);
      if (((iVar9 == 0) && (iVar9 = FUN_100182d4d(&local_458), iVar9 != -0x80)) && (iVar9 != 0)) {
        uVar12 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar12,0x10);
        if (cVar7 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = iVar9;
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
      FUN_100497f5f(lVar10);
    }
  }
  FUN_1001ab006(&local_488);
  FUN_1001ab006(&local_490);
LAB_10039836f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


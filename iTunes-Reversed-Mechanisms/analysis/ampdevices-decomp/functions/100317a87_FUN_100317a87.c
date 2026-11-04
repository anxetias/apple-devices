// name: FUN_100317a87
// address: 100317a87

undefined8 FUN_100317a87(long param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 local_838 [512];
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) ||
     (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
LAB_100317baa:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_22a = "TrackInstanceIsValid(trackInstance)";
LAB_100317c60:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    cVar2 = FUN_1002b458b(param_2);
    if (param_1 == 0) {
LAB_100317bf7:
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_22a = "TrackDataIsValid(trackData)";
        goto LAB_100317c60;
      }
    }
    else {
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure (expected to be true)";
          local_22c = 0x822;
          local_22a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        cVar3 = FUN_1001782e9(0,1);
        if (cVar3 == '\0') goto LAB_100317bf7;
      }
      lVar1 = *(long *)(param_2 + 8);
      if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) goto LAB_100317baa;
      if (param_3 == 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_22a = "parentFolderSpec != nullptr";
          goto LAB_100317c60;
        }
      }
      else {
        if ((cVar2 != '\0') || ((*(byte *)(param_1 + 0x1bb4) & 0x40) == 0)) {
          iVar4 = FUN_1001cd9a6("file-using-sort-fields",0,0);
          if (iVar4 == 0) {
            FUN_100476928(lVar1,&local_238);
            FUN_100478704(lVar1,local_638);
            FUN_1004772c4(lVar1,local_438);
            FUN_10047dc87(lVar1,local_838);
          }
          else {
            FUN_100476e65();
            FUN_100478736(lVar1,local_638);
            FUN_1004777d6(lVar1,local_438);
            FUN_10047e0c8(lVar1,local_838);
          }
          uVar5 = FUN_1004744bf(lVar1,0);
          uVar6 = FUN_10031774e(param_1,cVar2,uVar5,&local_238,local_638,local_438,local_838,
                                *(undefined4 *)(*(long *)(lVar1 + 0x78) + 0xc),
                                *(uint *)(lVar1 + 0xc2) >> 10 & 1,
                                *(uint *)(param_2 + 0x48) >> 0x13 & 1,param_3);
          goto LAB_100317bd1;
        }
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_22a = 
          "mediaDomain != MediaDomains::eNone || trackData->supportsMediaDomains == false";
          goto LAB_100317c60;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar6 = 0xffffffce;
LAB_100317bd1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


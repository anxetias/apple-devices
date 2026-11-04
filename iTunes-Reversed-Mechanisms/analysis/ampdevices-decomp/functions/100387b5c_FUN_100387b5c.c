// name: FUN_100387b5c
// address: 100387b5c

undefined8 FUN_100387b5c(int param_1,char param_2,uint param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_469;
  long local_468;
  uint local_45c;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "folderSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  uVar8 = param_3 & 0xfffffffe;
  uVar11 = param_3;
  if (SBORROW1('\0',param_2)) {
    uVar11 = uVar8;
  }
  uVar12 = uVar11 & 1;
  local_468 = param_4;
  if (param_1 == 0x3f0) {
    if (param_2 == '\x02') {
      local_45c = param_3;
      cVar1 = FUN_1005c86d7();
      param_4 = local_468;
      cVar7 = (cVar1 != '\0') * '\x02' + '\f';
      cVar10 = (cVar1 != '\0') * '\x02' + '\v';
      iVar2 = FUN_1005f6960(cVar7,cVar10,2,uVar8,local_468);
      if (iVar2 == 0) {
LAB_100387f6a:
        uVar3 = 0;
        goto switchD_100387c2f_caseD_3;
      }
      uVar3 = FUN_1005f6960((cVar1 == '\0') * '\x02' + '\f',(cVar1 == '\0') * '\x02' + '\v',2,uVar8,
                            param_4);
      if ((int)uVar3 == 0 || uVar12 == 0) goto switchD_100387c2f_caseD_3;
      uVar3 = 2;
      param_3 = local_45c;
    }
    else {
      uVar3 = 16000;
      if (param_2 != '\x01') goto switchD_100387c2f_caseD_3;
      cVar7 = '\n';
      cVar10 = '\t';
      uVar3 = 1;
    }
    uVar3 = FUN_1005f6960(cVar7,cVar10,uVar3,param_3,param_4);
    goto switchD_100387c2f_caseD_3;
  }
  if (param_1 != 0x3ec) {
    if (param_1 != 0x3e9) {
      uVar3 = FUN_1005f69eb(param_1,param_2,uVar11,param_4);
      goto switchD_100387c2f_caseD_3;
    }
    uVar3 = 16000;
    switch(param_2) {
    case '\x01':
      uVar3 = FUN_100193150(0xffff8005,0xb5646f63,uVar12,&local_458);
      pcVar6 = "Music";
      break;
    case '\x02':
      local_45c = param_3;
      cVar1 = FUN_1005c86d7();
      lVar9 = local_468;
      iVar5 = 4 - (uint)(cVar1 == '\0');
      iVar2 = FUN_1005f6551(iVar5,2,uVar8,local_468);
      if (iVar2 == 0) goto LAB_100387f6a;
      cVar1 = (cVar1 == '\0') + '\x03';
      goto LAB_100387f39;
    case '\x03':
    case '\x05':
    case '\x06':
    case '\a':
      goto switchD_100387c2f_caseD_3;
    case '\x04':
      uVar3 = FUN_1003870d4(0xb,param_3,&local_458);
      pcVar6 = "Podcasts";
      break;
    case '\b':
      uVar3 = FUN_1003870d4(0xb,param_3,&local_458);
      pcVar6 = "Books";
      break;
    default:
      if (param_2 != -0x80) goto switchD_100387c2f_caseD_3;
      uVar3 = FUN_100193150(0xffff8005,0xb5646f63,uVar12,&local_458);
      pcVar6 = "iTunes";
    }
    uVar4 = 0;
    goto LAB_100387ec9;
  }
  uVar3 = 16000;
  switch(param_2) {
  case '\x01':
    uVar3 = FUN_100387b5c(0x3e9,1,param_3,&local_458);
    pcVar6 = "Music Library.musiclibrary";
    break;
  case '\x02':
    local_45c = param_3;
    cVar1 = FUN_1005c86d7();
    lVar9 = local_468;
    iVar5 = 6 - (uint)(cVar1 == '\0');
    iVar2 = FUN_1005f6551(iVar5,2,uVar8,local_468);
    if (iVar2 == 0) goto LAB_100387f6a;
    cVar1 = (cVar1 == '\0') + '\x05';
LAB_100387f39:
    uVar3 = FUN_1005f6551(cVar1,2,uVar8,lVar9);
    if ((int)uVar3 != 0 && uVar12 != 0) {
      uVar3 = FUN_1005f6551(iVar5,2,local_45c,lVar9);
    }
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    goto switchD_100387c2f_caseD_3;
  case '\x04':
    uVar3 = FUN_1005f6507(0x3e9,4,param_3,&local_458);
    pcVar6 = "Podcasts Library.podcastslibrary";
    break;
  case '\b':
    uVar3 = FUN_1005f6507(0x3e9,8,param_3,&local_458);
    pcVar6 = "Books Library.bookslibrary";
    break;
  default:
    if (param_2 == -0x80) {
      uVar3 = FUN_1005f6507(0x3e9,0x80,uVar8,param_4);
    }
    goto switchD_100387c2f_caseD_3;
  }
  uVar4 = 1;
LAB_100387ec9:
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1005f63db(&local_458,pcVar6,uVar11,uVar4,local_468,&local_469);
  }
switchD_100387c2f_caseD_3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}


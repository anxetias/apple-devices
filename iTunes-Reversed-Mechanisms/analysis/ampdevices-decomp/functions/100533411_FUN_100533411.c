// name: FUN_100533411
// address: 100533411

int FUN_100533411(char param_1,byte param_2,char param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined1 local_4d0 [80];
  undefined1 local_480 [16];
  void *local_470;
  char *local_468;
  uint local_45c;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = FUN_10053315f();
  if ((char)uVar4 != '\0') {
    local_470 = param_4;
    if (param_4 == (void *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "outLibraryBundleFolderSpec != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
    else {
      if (param_1 == '\x01') {
        local_468 = &DAT_1008c0920;
        puVar5 = &DAT_1008bfcc0;
LAB_100533561:
        local_45c = 0;
      }
      else {
        if (param_1 != -0x80) {
          iVar2 = 16000;
          if (param_1 != '\x02') goto LAB_10053369c;
          local_468 = &DAT_1008c1520;
          puVar5 = &DAT_1008c00e0;
          goto LAB_100533561;
        }
        local_45c = (uint)CONCAT71((int7)((ulong)uVar4 >> 8),1);
        puVar5 = &DAT_1008c0500;
        local_468 = (char *)0x0;
      }
      cVar1 = FUN_10017cbd0(puVar5);
      if ((cVar1 == '\0') ||
         ((iVar2 = FUN_10017d477(puVar5,local_4d0,0), iVar2 != 0 &&
          (((((char)local_45c != '\0' || (param_3 == '\0')) || (*local_468 == '\0')) ||
           (iVar2 = FUN_10018dc80(local_468,puVar5), iVar2 != 0)))))) {
        FUN_1001b7a44(local_480);
        FUN_10017cbfd(puVar5);
        if ((char)local_45c == '\0') {
          *local_468 = '\0';
        }
        iVar2 = FUN_1005331ae(param_1,0,&local_458,local_480);
        if (iVar2 == 0) {
          cVar1 = FUN_1001b8428(local_480);
          iVar2 = -0x78;
          if ((cVar1 == '\0') &&
             (iVar2 = FUN_100188963(&local_458,local_480,local_470,0), iVar2 == 0)) {
            _memcpy(puVar5,local_470,0x420);
            iVar2 = 0;
            if ((char)local_45c == '\0') {
              *local_468 = '\0';
              FUN_1001823de(puVar5,local_468,0xbfd);
              iVar2 = 0;
            }
          }
        }
        FUN_1001b7a50(local_480);
      }
      else {
        _memcpy(local_470,puVar5,0x420);
        iVar2 = 0;
      }
    }
LAB_10053369c:
    if (((!SBORROW1('\0',param_1)) && (param_3 != '\0')) && (iVar2 != 0)) {
      FUN_1001b7a44(local_4d0);
      iVar2 = FUN_1005331ae(param_1,0,&local_458,local_4d0);
      if (iVar2 == 0) {
        iVar2 = FUN_100189043(&local_458,local_4d0,local_470);
      }
      FUN_1001b7a50(local_4d0);
    }
    goto switchD_1005334f1_caseD_3;
  }
  iVar2 = FUN_100387b5c(0x3e9,param_1,(param_3 != '\0') + (param_2 != 0) * '\x02',&local_458);
  if (iVar2 != 0) goto switchD_1005334f1_caseD_3;
  iVar2 = 16000;
  switch(param_1) {
  case '\x01':
    pcVar6 = "Music Library.musiclibrary";
    break;
  case '\x02':
    cVar1 = FUN_1005c86d7();
    pcVar6 = "TV Library.tvlibrary";
    local_468 = "Videos Library.tvlibrary";
    if (cVar1 == '\0') {
      local_468 = "TV Library.tvlibrary";
    }
    iVar2 = 0;
    local_45c = (uint)param_2;
    iVar3 = FUN_100533300(&local_458,local_468,param_2,1,0,param_4);
    if (iVar3 != 0) {
      if (cVar1 == '\0') {
        pcVar6 = "Videos Library.tvlibrary";
      }
      iVar2 = FUN_100533300(&local_458,pcVar6,local_45c,1,0,param_4);
      if (param_3 != '\0' && iVar2 != 0) {
        iVar2 = FUN_100533300(&local_458,local_468,local_45c,1,1,param_4);
      }
    }
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    goto switchD_1005334f1_caseD_3;
  case '\x04':
    pcVar6 = "Podcasts Library.podcastslibrary";
    break;
  case '\b':
    pcVar6 = "Books Library.bookslibrary";
    break;
  default:
    if (param_1 == -0x80) {
      iVar2 = 0;
      iVar3 = FUN_100533300(&local_458,"iTunes Library.itl",param_2,0,param_3,param_4);
      if (iVar3 != 0) {
        iVar2 = FUN_100533300(&local_458,"iTunes Library",param_2,0,param_3,param_4);
      }
    }
    goto switchD_1005334f1_caseD_3;
  }
  iVar2 = FUN_100533300(&local_458,pcVar6,param_2,1,param_3,param_4);
switchD_1005334f1_caseD_3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


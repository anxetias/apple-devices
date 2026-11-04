// name: FUN_1002441f8
// address: 1002441f8

int FUN_1002441f8(int param_1,int *param_2,int param_3,char param_4,void *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  char *pcVar6;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined1 local_238 [40];
  ushort local_210;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_64a = "volumeSpec != nullptr";
LAB_1002443eb:
      local_64c = 0x822;
      local_654 = "Assertion failure";
      local_658 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
LAB_100244410:
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto switchD_100244560_caseD_73796e6e;
  }
  if (param_5 == (void *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_64a = "folderSpec != nullptr";
      goto LAB_1002443eb;
    }
    goto LAB_100244410;
  }
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_64a = "deviceClass != kITIPodDeviceClassUnknown";
      goto LAB_1002443eb;
    }
    goto LAB_100244410;
  }
  iVar1 = *param_2;
  if ((iVar1 == 0x41464350) && (iVar3 = FUN_100244e08(param_1,param_3,local_238), iVar3 == 0)) {
    iVar3 = FUN_10036de38(param_2,local_238,&local_658,0);
    if (iVar3 == 0) {
      _memcpy(param_5,&local_658,0x420);
      goto switchD_100244560_caseD_73796e6e;
    }
    if (param_4 == '\0') goto switchD_100244560_caseD_73796e6e;
  }
  iVar3 = -0x32;
  if (param_3 < 0x70687669) {
    if (param_3 < 0x6372746c) {
      if (param_3 < 0x626f6b70) {
        if (param_3 < 0x61707061) {
          if (param_3 == 0x61697266) {
            _memcpy(&local_658,param_2,0x420);
            bVar5 = 1;
            pcVar6 = "AirFair";
          }
          else {
            if (param_3 != 0x6169726c) goto switchD_100244560_caseD_73796e6e;
            _memcpy(&local_658,param_2,0x420);
            bVar5 = 1;
            pcVar6 = "Airlock";
          }
        }
        else {
          if (param_3 == 0x61707061) {
            _memcpy(&local_658,param_2,0x420);
            pcVar6 = "ApplicationArchives";
            goto LAB_100244cb6;
          }
          if ((param_3 != 0x61727477) ||
             (iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658), iVar3 != 0))
          goto switchD_100244560_caseD_73796e6e;
          bVar5 = 1;
          pcVar6 = "Artwork";
        }
      }
      else {
        if (param_3 < 0x63617374) {
          if (param_3 == 0x626f6b70) {
            iVar3 = FUN_1002441f8(param_1,param_2,0x626f6f6b,param_4,&local_658);
            if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
            pcVar6 = "Purchases";
            goto LAB_100244c04;
          }
          if (param_3 != 0x626f6f6b) goto switchD_100244560_caseD_73796e6e;
          _memcpy(&local_658,param_2,0x420);
          pcVar6 = "Books";
        }
        else if (param_3 == 0x63617374) {
          _memcpy(&local_658,param_2,0x420);
          pcVar6 = "Podcasts";
        }
        else if (param_3 == 0x636c6472) {
          _memcpy(&local_658,param_2,0x420);
          pcVar6 = "Calendars";
        }
        else {
          if (param_3 != 0x636e7478) goto switchD_100244560_caseD_73796e6e;
          _memcpy(&local_658,param_2,0x420);
          pcVar6 = "Contacts";
        }
LAB_100244cb6:
        bVar5 = 0;
      }
    }
    else if (param_3 < 0x67616d65) {
      if (param_3 < 0x64766365) {
        if (param_3 != 0x6372746c) {
          if (param_3 != 0x6463696d) goto switchD_100244560_caseD_73796e6e;
          _memcpy(&local_658,param_2,0x420);
          pcVar6 = "DCIM";
          goto LAB_100244cb6;
        }
        iVar3 = FUN_1002441f8(param_1,param_2,0x726f6f74,param_4,&local_658);
        if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
        pcVar6 = "iTunes_Control";
        if (param_1 == 0x69506f64) {
          pcVar6 = "iPod_Control";
        }
        bVar5 = 1;
      }
      else if (param_3 == 0x64766365) {
        iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658);
        if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
        bVar5 = 1;
        pcVar6 = "Device";
      }
      else {
        if (param_3 == 0x66756c6c) {
          iVar3 = FUN_1002441f8(param_1,param_2,0x70696374,param_4,&local_658);
          if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
          pcVar6 = "Full Resolution";
          goto LAB_100244c04;
        }
        if ((param_3 != 0x67616d64) ||
           (iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658), iVar3 != 0))
        goto switchD_100244560_caseD_73796e6e;
        bVar5 = 1;
        pcVar6 = "GameData_RW";
      }
    }
    else if (param_3 < 0x6974756e) {
      if (param_3 == 0x67616d65) {
        iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658);
        if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
        bVar5 = 1;
        pcVar6 = "Games_RO";
      }
      else {
        if ((param_3 != 0x67616d73) ||
           (iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658), iVar3 != 0))
        goto switchD_100244560_caseD_73796e6e;
        bVar5 = 1;
        pcVar6 = "GameStats_WO";
      }
    }
    else if (param_3 == 0x6974756e) {
      iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658);
      if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
      bVar5 = 1;
      pcVar6 = "iTunes";
    }
    else {
      if (param_3 != 0x6c69636e) {
        if (param_3 != 0x6d656d6f) goto switchD_100244560_caseD_73796e6e;
        _memcpy(&local_658,param_2,0x420);
        pcVar6 = "Recordings";
        goto LAB_100244cb6;
      }
      iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658);
      if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
      bVar5 = 1;
      pcVar6 = "Licenses";
    }
    goto LAB_100244d4c;
  }
  if (param_3 < 0x73796170) {
    if (param_3 < 0x72657374) {
      if (param_3 < 0x70756273) {
        if (param_3 == 0x70687669) {
          iVar3 = FUN_1002441f8(param_1,param_2,0x70696374,param_4,&local_658);
          if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
          pcVar6 = "Videos";
          goto LAB_100244c04;
        }
        if (param_3 != 0x70696374) goto switchD_100244560_caseD_73796e6e;
        _memcpy(&local_658,param_2,0x420);
        pcVar6 = "Photos";
      }
      else if (param_3 == 0x70756273) {
        _memcpy(&local_658,param_2,0x420);
        pcVar6 = "PublicStaging";
      }
      else {
        if (param_3 != 0x70757263) goto switchD_100244560_caseD_73796e6e;
        _memcpy(&local_658,param_2,0x420);
        pcVar6 = "Purchases";
      }
      goto LAB_100244cb6;
    }
    if (param_3 < 0x726f6f74) {
      if (param_3 == 0x72657374) {
        _memcpy(&local_658,param_2,0x420);
        pcVar6 = "iTunesRestore";
        goto LAB_100244cb6;
      }
      if ((param_3 != 0x72696e67) ||
         (iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658), iVar3 != 0))
      goto switchD_100244560_caseD_73796e6e;
      bVar5 = 1;
      pcVar6 = "Ringtones";
    }
    else {
      if (param_3 == 0x726f6f74) {
        _memcpy(param_5,param_2,0x420);
        iVar3 = 0;
        goto switchD_100244560_caseD_73796e6e;
      }
      if (param_3 == 0x736f6e67) {
        iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658);
        if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
        bVar5 = 1;
        pcVar6 = "Music";
      }
      else {
        if ((param_3 != 0x73706368) ||
           (iVar3 = FUN_1002441f8(param_1,param_2,0x6372746c,param_4,&local_658), iVar3 != 0))
        goto switchD_100244560_caseD_73796e6e;
        bVar5 = 1;
        pcVar6 = "Speakable";
      }
    }
    goto LAB_100244d4c;
  }
  if (param_3 < 0x73796e63) {
    if (param_3 == 0x73796170) {
      iVar3 = FUN_1002441f8(param_1,param_2,0x70756273,param_4,&local_658);
      if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
      bVar5 = 1;
      pcVar6 = "ApplicationSync";
    }
    else {
      if (param_3 != 0x73796e61) {
        if (param_3 != 0x73796e62) goto switchD_100244560_caseD_73796e6e;
        uVar4 = 0x626f6f6b;
        goto LAB_100244d28;
      }
      iVar3 = FUN_1002441f8(param_1,param_2,0x61697266,param_4,&local_658);
      if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
      bVar5 = 1;
      pcVar6 = "sync";
    }
    goto LAB_100244d4c;
  }
  switch(param_3) {
  case 0x73796e6d:
    iVar3 = FUN_1002441f8(param_1,param_2,0x73796e63,param_4,&local_658);
    if (iVar3 != 0) goto switchD_100244560_caseD_73796e6e;
    bVar5 = 1;
    pcVar6 = "Media";
    goto LAB_100244d4c;
  case 0x73796e6e:
  case 0x73796e6f:
  case 0x73796e71:
  case 0x73796e73:
  case 0x73796e74:
  case 0x73796e75:
    goto switchD_100244560_caseD_73796e6e;
  case 0x73796e70:
    uVar4 = 0x70696374;
    break;
  case 0x73796e72:
    uVar4 = 0x72696e67;
    break;
  case 0x73796e76:
    uVar4 = 0x6d656d6f;
    break;
  default:
    if (param_3 == 0x73796e63) {
      uVar4 = 0x6372746c;
      break;
    }
    if ((param_3 != 0x74686d62) ||
       (iVar3 = FUN_1002441f8(param_1,param_2,0x70696374,param_4,&local_658), iVar3 != 0))
    goto switchD_100244560_caseD_73796e6e;
    pcVar6 = "Thumbs";
LAB_100244c04:
    bVar5 = 0;
    goto LAB_100244d4c;
  }
LAB_100244d28:
  iVar3 = FUN_1002441f8(param_1,param_2,uVar4,param_4,&local_658);
  if (iVar3 == 0) {
    bVar5 = 1;
    pcVar6 = "Sync";
LAB_100244d4c:
    iVar3 = FUN_1001888ba(&local_658,pcVar6,param_5,local_238);
    if (iVar3 == 0) {
      iVar3 = 0;
      if ((iVar1 != 0x41464350) && ((local_210 >> 0xe & 1) != (ushort)bVar5)) {
        iVar3 = FUN_1002440a0(param_5);
      }
    }
    else if (param_4 != '\0') {
      FUN_1001e04f5(pcVar6,local_238);
      iVar3 = FUN_100243fb1(&local_658,local_238,bVar5,param_5);
    }
  }
switchD_100244560_caseD_73796e6e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}


// name: FUN_10063f184
// address: 10063f184

int FUN_10063f184(long param_1,int param_2,void *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  switch(param_2) {
  case 300:
    bVar7 = *(char *)(param_1 + 0x148) - 2;
    if ((bVar7 < 5) && ((0x1bU >> (bVar7 & 0x1f) & 1) != 0)) {
      cVar1 = (char)(0x605020302 >> (bVar7 * '\b' & 0x3f));
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "(mCurrentAlbumHeader.albumKind == kAlbumKind_Other) || (mCurrentAlbumHeader.albumKind == kAlbumKind_Podcast) || (mCurrentAlbumHeader.albumKind == kAlbumKind_ObsoleteiTunesU) || (mCurrentAlbumHeader.albumKind == kAlbumKind_ObsoleteApplication)"
        ;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      cVar1 = *(char *)(param_1 + 0x148);
    }
    bVar7 = *(byte *)(param_1 + 0x9b8) ^ 1;
    lVar5 = param_1 + 0xd0;
    if (cVar1 == '\x05') {
      iVar2 = FUN_10056df1e(param_3,param_4,bVar7,*(long *)(param_1 + 8) + 0x1c10,lVar5);
    }
    else {
      FUN_10056df1e(param_3,param_4,bVar7,*(long *)(param_1 + 8) + 0x1c60,lVar5);
      iVar2 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,
                            *(long *)(param_1 + 8) + 0x1c60,lVar5);
    }
    break;
  case 0x12d:
    if (*(char *)(param_1 + 0x148) != '\x02') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mCurrentAlbumHeader.albumKind == kAlbumKind_Other";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar2 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,
                          *(long *)(param_1 + 8) + 0x1cb0,param_1 + 0xd4);
    break;
  case 0x12e:
    if (*(char *)(param_1 + 0x148) != '\x02') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mCurrentAlbumHeader.albumKind == kAlbumKind_Other";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar2 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,
                          *(long *)(param_1 + 8) + 0x1cb0,param_1 + 0xd8);
    break;
  case 0x12f:
    if (*(char *)(param_1 + 0x148) != '\x04') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mCurrentAlbumHeader.albumKind == kAlbumKind_TVShow";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar2 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,
                          *(long *)(param_1 + 8) + 0x2070,param_1 + 0xd0);
    break;
  case 0x130:
    break;
  case 0x131:
    if (*(char *)(param_1 + 0x148) != '\x03') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mCurrentAlbumHeader.albumKind == kAlbumKind_Podcast";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_10056ddd3(&local_58,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x110,&local_58);
    goto LAB_10063f45e;
  case 0x132:
    if (*(char *)(param_1 + 0x148) != '\x03') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mCurrentAlbumHeader.albumKind == kAlbumKind_Podcast";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_10056ddd3(&local_58,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x120,&local_58);
    goto LAB_10063f45e;
  case 0x133:
    FUN_10056ddd3(&local_58,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0xf8,&local_58);
LAB_10063f45e:
    FUN_1001b7a50(&local_58);
    iVar2 = 0;
    break;
  default:
    if (param_2 == 0x616d6169) {
      if (param_4 == 0) {
        local_60 = 0;
        lVar5 = *(long *)(param_1 + 0xe0);
        if ((((*(byte *)(param_1 + 0x18) & 8) != 0) && (*(long *)(param_1 + 0x140) != 0)) &&
           (lVar6 = FUN_1003a3354(*(undefined8 *)(param_1 + 8)), lVar6 != 0)) {
          uVar4 = FUN_1002fa216(*(undefined8 *)(param_1 + 8));
          *(undefined8 *)(param_1 + 0xe0) = uVar4;
        }
        iVar3 = FUN_10027373a(param_1 + 0xc0,&local_60);
        iVar2 = iVar3;
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            FUN_1001f1970(&local_58,*(undefined8 *)(param_1 + 0x160),
                          *(undefined8 *)(param_1 + 0x168));
            FUN_1001aaadc(local_60 + 200,&local_58);
            FUN_1001ab006(&local_58);
            *(undefined8 *)(local_60 + 0xd0) = *(undefined8 *)(param_1 + 0x178);
            *(undefined4 *)(local_60 + 0xe0) = *(undefined4 *)(param_1 + 0x180);
            *(undefined1 *)(local_60 + 0xe4) = *(undefined1 *)(param_1 + 0x184);
            FUN_1002779d8(param_1 + 0x7f0,*(undefined8 *)(local_60 + 0x20));
            if ((lVar5 != 0) && (lVar5 != *(long *)(local_60 + 0x20))) {
              FUN_1002779d8(param_1 + 0x7f0,lVar5);
            }
            *(undefined1 *)(local_60 + 0xe6) = *(undefined1 *)(param_1 + 0x15a);
            *(undefined4 *)(local_60 + 0x84) = *(undefined4 *)(param_1 + 400);
            *(byte *)(local_60 + 0xfa) =
                 *(byte *)(local_60 + 0xfa) & 0xf7 | (*(char *)(param_1 + 0x15b) != '\0') << 3;
            *(undefined8 *)(local_60 + 0x40) = *(undefined8 *)(param_1 + 0x1a0);
            *(undefined8 *)(local_60 + 0x30) = *(undefined8 *)(param_1 + 0x170);
            iVar2 = 0;
          }
          else {
            iVar2 = 0;
            if (iVar3 != 0x234e) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              iVar2 = iVar3;
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
        }
        break;
      }
      if (param_4 != 0x8c) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inObjectSize == sizeof( AMLAlbumInfo )";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (((*(byte *)(param_1 + 0x18) & 0x10) != 0) && (*(long *)((long)param_3 + 0x10) != 0)) {
        lVar5 = FUN_1003a3354(*(undefined8 *)(param_1 + 8));
        iVar2 = 0x1b59;
        if (lVar5 != 0) break;
      }
      FUN_1002736ec((uint *)(param_1 + 0xc0));
      *(uint *)(param_1 + 0xc0) = (uint)*(byte *)((long)param_3 + 0x18);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 8);
      *(bool *)(param_1 + 0xdc) = *(char *)((long)param_3 + 0x19) != '\0';
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)((long)param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)((long)param_3 + 0x2c);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)((long)param_3 + 0x10);
      *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)((long)param_3 + 0x1c);
      _memcpy((void *)(param_1 + 0x130),param_3,0x8c);
    }
    else {
      if (param_2 != 0x616d616c) break;
      if (param_4 != 0) {
        iVar2 = 0;
        if (param_4 != 0x30) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "inObjectSize == sizeof( *header )";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = 0;
        }
        break;
      }
      *(undefined1 *)(param_1 + 0x898) = 1;
    }
    iVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


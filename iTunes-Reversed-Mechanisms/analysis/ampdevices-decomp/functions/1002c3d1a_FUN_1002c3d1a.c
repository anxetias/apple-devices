// name: FUN_1002c3d1a
// address: 1002c3d1a

int FUN_1002c3d1a(long param_1)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_a98 [16];
  undefined1 local_a88 [16];
  undefined1 local_a78 [16];
  undefined1 local_a68 [520];
  undefined1 local_860 [84];
  ushort local_80c;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
  if (cVar2 == '\0') {
    iVar4 = 0;
    goto LAB_1002c3f48;
  }
  lVar1 = param_1 + 0x6b40;
  iVar4 = FUN_1001888ba(lVar1,".VolumeIcon.icns",local_440,0);
  if (iVar4 != 0) {
    sVar3 = *(short *)(param_1 + 0x6b1a);
    FUN_1001b7a44(local_a68);
    lVar5 = 8;
    do {
      if (*(short *)((long)&PTR_s_Z21IsValidMusicSyncAlbumPK9Album_100845cd8 + lVar5) == sVar3) {
        FUN_1001b7b04(local_a98,*(undefined8 *)((long)&DAT_100845ce0 + lVar5));
        FUN_1001b7b04(local_a88,".icns");
        FUN_1001b7a5c(local_a78,local_a98);
        FUN_1001bbcfe(local_a78,local_a88);
        FUN_1001b80b2(local_a68,local_a78);
        FUN_1001b7a50(local_a78);
        FUN_1001b7a50(local_a88);
        FUN_1001b7a50(local_a98);
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x748);
    cVar2 = FUN_1001b8428(local_a68);
    if (cVar2 != '\0') {
      FUN_1001b7a50(local_a68);
      iVar4 = -0xc0;
      goto LAB_1002c3f48;
    }
    uVar6 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_amp_devices);
    iVar4 = FUN_1001eb924(uVar6,local_a68,local_860);
    FUN_1001b7a50(local_a68);
    if (iVar4 != 0) goto LAB_1002c3f48;
    FUN_1001e4bb2(".VolumeIcon.icns",local_a68);
    iVar4 = FUN_100182f9b(1,local_860,lVar1,local_a68,local_440,0);
    if (iVar4 != 0) goto LAB_1002c3f48;
    FUN_100186d13(local_440,1);
  }
  sVar3 = FUN_10018cbee(lVar1);
  sVar3 = _FSGetVolumeInfo((int)sVar3,0,0,0,0,0,local_a68);
  if (sVar3 == 0) {
    FUN_1001c62d9(local_860,0x94);
    sVar3 = _FSGetCatalogInfo(local_a68,0x800,local_860,0,0,0);
    if (sVar3 == 0) {
      iVar4 = 0;
      if ((local_80c >> 10 & 1) != 0) goto LAB_1002c3f48;
      local_80c = local_80c | 0x400;
      sVar3 = _FSSetCatalogInfo(local_a68,0x800);
      if (sVar3 == 0) {
        FUN_100194b97(lVar1);
        iVar4 = 0;
        goto LAB_1002c3f48;
      }
    }
  }
  iVar4 = (int)sVar3;
LAB_1002c3f48:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}


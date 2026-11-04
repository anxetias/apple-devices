// name: FUN_1004d0f38
// address: 1004d0f38

/* WARNING: Removing unreachable block (ram,0x0001004d175e) */
/* WARNING: Removing unreachable block (ram,0x0001004d14d8) */
/* WARNING: Removing unreachable block (ram,0x0001004d1501) */
/* WARNING: Removing unreachable block (ram,0x0001004d150a) */
/* WARNING: Removing unreachable block (ram,0x0001004d1517) */
/* WARNING: Removing unreachable block (ram,0x0001004d155a) */
/* WARNING: Removing unreachable block (ram,0x0001004d15b7) */
/* WARNING: Removing unreachable block (ram,0x0001004d1572) */
/* WARNING: Removing unreachable block (ram,0x0001004d158a) */
/* WARNING: Removing unreachable block (ram,0x0001004d1612) */
/* WARNING: Removing unreachable block (ram,0x0001004d15a3) */
/* WARNING: Removing unreachable block (ram,0x0001004d15ac) */
/* WARNING: Removing unreachable block (ram,0x0001004d15cf) */
/* WARNING: Removing unreachable block (ram,0x0001004d15b5) */
/* WARNING: Removing unreachable block (ram,0x0001004d153a) */
/* WARNING: Removing unreachable block (ram,0x0001004d1547) */
/* WARNING: Removing unreachable block (ram,0x0001004d15e5) */
/* WARNING: Removing unreachable block (ram,0x0001004d160d) */
/* WARNING: Removing unreachable block (ram,0x0001004d1119) */
/* WARNING: Removing unreachable block (ram,0x0001004d112e) */
/* WARNING: Removing unreachable block (ram,0x0001004d113a) */
/* WARNING: Removing unreachable block (ram,0x0001004d1149) */
/* WARNING: Removing unreachable block (ram,0x0001004d1152) */
/* WARNING: Removing unreachable block (ram,0x0001004d115b) */
/* WARNING: Removing unreachable block (ram,0x0001004d119d) */
/* WARNING: Removing unreachable block (ram,0x0001004d12a4) */
/* WARNING: Removing unreachable block (ram,0x0001004d130b) */
/* WARNING: Removing unreachable block (ram,0x0001004d12bd) */
/* WARNING: Removing unreachable block (ram,0x0001004d11bf) */
/* WARNING: Removing unreachable block (ram,0x0001004d11d8) */
/* WARNING: Removing unreachable block (ram,0x0001004d12c8) */
/* WARNING: Removing unreachable block (ram,0x0001004d1357) */
/* WARNING: Removing unreachable block (ram,0x0001004d12e1) */
/* WARNING: Removing unreachable block (ram,0x0001004d11f0) */
/* WARNING: Removing unreachable block (ram,0x0001004d1208) */
/* WARNING: Removing unreachable block (ram,0x0001004d13a3) */
/* WARNING: Removing unreachable block (ram,0x0001004d1216) */
/* WARNING: Removing unreachable block (ram,0x0001004d1232) */
/* WARNING: Removing unreachable block (ram,0x0001004d128e) */
/* WARNING: Removing unreachable block (ram,0x0001004d129e) */
/* WARNING: Removing unreachable block (ram,0x0001004d12ea) */
/* WARNING: Removing unreachable block (ram,0x0001004d12f2) */
/* WARNING: Removing unreachable block (ram,0x0001004d1306) */
/* WARNING: Removing unreachable block (ram,0x0001004d14bd) */
/* WARNING: Removing unreachable block (ram,0x0001004d147d) */
/* WARNING: Removing unreachable block (ram,0x0001004d1489) */
/* WARNING: Removing unreachable block (ram,0x0001004d1492) */
/* WARNING: Removing unreachable block (ram,0x0001004d149b) */
/* WARNING: Removing unreachable block (ram,0x0001004d14b7) */
/* WARNING: Removing unreachable block (ram,0x0001004d14aa) */
/* WARNING: Removing unreachable block (ram,0x0001004d14bb) */
/* WARNING: Removing unreachable block (ram,0x0001004d14ad) */
/* WARNING: Removing unreachable block (ram,0x0001004d178e) */
/* WARNING: Removing unreachable block (ram,0x0001004d18a2) */
/* WARNING: Removing unreachable block (ram,0x0001004d179c) */
/* WARNING: Removing unreachable block (ram,0x0001004d17b4) */
/* WARNING: Removing unreachable block (ram,0x0001004d17cf) */
/* WARNING: Removing unreachable block (ram,0x0001004d17d3) */
/* WARNING: Removing unreachable block (ram,0x0001004d17d7) */
/* WARNING: Removing unreachable block (ram,0x0001004d17db) */
/* WARNING: Removing unreachable block (ram,0x0001004d182f) */
/* WARNING: Removing unreachable block (ram,0x0001004d1843) */
/* WARNING: Removing unreachable block (ram,0x0001004d18ba) */
/* WARNING: Removing unreachable block (ram,0x0001004d184d) */
/* WARNING: Removing unreachable block (ram,0x0001004d1865) */
/* WARNING: Removing unreachable block (ram,0x0001004d1893) */
/* WARNING: Removing unreachable block (ram,0x0001004d14c4) */
/* WARNING: Removing unreachable block (ram,0x0001004d166e) */
/* WARNING: Removing unreachable block (ram,0x0001004d16fe) */
/* WARNING: Removing unreachable block (ram,0x0001004d1706) */
/* WARNING: Removing unreachable block (ram,0x0001004d170f) */
/* WARNING: Removing unreachable block (ram,0x0001004d1718) */
/* WARNING: Removing unreachable block (ram,0x0001004d177d) */

bool FUN_1004d0f38(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 local_a98;
  undefined4 local_a94;
  undefined2 uStack_a90;
  undefined2 uStack_a8e;
  undefined2 uStack_a8c;
  undefined4 uStack_a8a;
  undefined2 uStack_a86;
  undefined2 uStack_a84;
  undefined1 local_898 [1056];
  undefined1 local_478 [1088];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004d103e:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_a98 = 0x8220202;
      local_a94 = 0x7a0a90;
      uStack_a90 = 1;
      uStack_a8e = 0;
      uStack_a8c = 0x822;
      uStack_a8a = 0x7ad2b2;
      uStack_a86 = 1;
      uStack_a84 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_a98 = 0x8220202;
        local_a94 = 0x7ab58c;
        uStack_a90 = 1;
        uStack_a8e = 0;
        uStack_a8c = 0x822;
        uStack_a8a = 0x7ad710;
        uStack_a86 = 1;
        uStack_a84 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1004d103e;
    }
    if (((*(char *)(param_1 + 0x14cd8) != '\0') &&
        ((*(char *)(param_1 + 0x14cda) == '\0' || (*(char *)(param_1 + 0x6abf) != '\0')))) &&
       ((*(char *)(param_1 + 0x3a2) == '\0' || ((*(byte *)(param_1 + 0x166e0) & 4) == 0)))) {
      lVar1 = param_1 + 0x75e0;
      iVar3 = FUN_1001888ba(lVar1,"OTGPlaylistInfo",local_478);
      iVar4 = FUN_1001888ba(lVar1,"OnTheGoPlaylist.plist",local_898);
      if (iVar4 == 0) {
        bVar7 = true;
      }
      else {
        iVar4 = FUN_1001888ba(param_1 + 0x6b40,"iTunesOnTheGoPlaylist.plist",local_898);
        bVar7 = iVar4 == 0;
      }
      FUN_10017fdd8(lVar1,1,0xc,FUN_1004d1937);
      if ((*(char *)(param_1 + 0x6acf) == '\0') || (*(char *)(param_1 + 0x6acc) == '\0')) {
        bVar6 = false;
        if (iVar3 == 0) {
          bVar6 = !bVar7;
          if (bVar6) {
            FUN_1004d1c4c(param_1,local_478);
          }
          FUN_1004d43c0(local_478,*(undefined1 *)(param_1 + 0x3a2));
          FUN_1001b1464();
        }
        if (bVar7) {
          FUN_1004d238c(param_1,local_898,0,1);
          FUN_1004d43c0(local_898,*(undefined1 *)(param_1 + 0x3a2));
          bVar6 = true;
          FUN_1001b1464();
        }
      }
      else {
        bVar6 = false;
      }
      goto LAB_1004d1067;
    }
  }
  bVar6 = false;
LAB_1004d1067:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar6;
}


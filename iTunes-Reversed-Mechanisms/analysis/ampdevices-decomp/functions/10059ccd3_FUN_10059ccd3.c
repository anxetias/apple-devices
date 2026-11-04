// name: FUN_10059ccd3
// address: 10059ccd3

undefined4 FUN_10059ccd3(long param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  int local_70;
  int local_6c;
  undefined4 local_68;
  char cStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  puVar1 = PTR___DefaultRuneLocale_10082cae8;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar8 = 0;
  while( true ) {
    cVar2 = *(char *)(param_1 + lVar8);
    if (cVar2 < '\0') {
      uVar3 = ___maskrune((int)cVar2,0x100);
    }
    else {
      uVar3 = *(uint *)(puVar1 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x100;
    }
    if (uVar3 == 0) {
      *(undefined1 *)((long)&local_68 + lVar8) = 0;
      iVar4 = _sscanf((char *)(param_1 + lVar8),"%u,%u",&local_70,&local_6c);
      if (iVar4 != 2) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 == '\0') goto LAB_10059ce2d;
        local_3a = "sscanf( productType, \"%u,%u\", &majorVersion, &minorVersion ) == 2";
        goto LAB_10059cef7;
      }
      if (CONCAT13(uStack_62,CONCAT12(uStack_63,CONCAT11(cStack_64,local_68._3_1_))) == 0x656e6f &&
          local_68 == 0x6f685069) {
        puVar5 = &DAT_100759780;
        iVar4 = 0x44;
      }
      else {
        iVar4 = 9;
        if (cStack_64 == '\0' && local_68 == 0x646f5069) {
          puVar5 = &DAT_100759ab0;
        }
        else if (cStack_64 == '\0' && local_68 == 0x64615069) {
          puVar5 = &DAT_100759b20;
          iVar4 = 0x67;
        }
        else if (CONCAT17(uStack_61,
                          CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT14(cStack_64,local_68)))) ==
                 0x5654656c707041) {
          puVar5 = &DAT_10075a000;
        }
        else if (CONCAT11(uStack_63,cStack_64) == 0x68 && local_68 == 0x63746157) {
          puVar5 = &DAT_10075a070;
          iVar4 = 0x32;
        }
        else {
          if (CONCAT71(uStack_60,uStack_61) != 0x79726f73736563 ||
              CONCAT17(uStack_61,
                       CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT14(cStack_64,local_68)))) !=
              0x6363416f69647541) goto LAB_10059cf4f;
          puVar5 = &DAT_10075a2d0;
          iVar4 = 4;
        }
      }
      lVar8 = 0;
      goto LAB_10059cf3c;
    }
    if (lVar8 == 0x20) break;
    *(undefined1 *)((long)&local_68 + lVar8) = *(undefined1 *)(param_1 + lVar8);
    lVar8 = lVar8 + 1;
  }
  uVar6 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar6,0x10);
  if (cVar2 != '\0') {
    local_3a = "familyLength < (sizeof(family) / sizeof(family[0]))";
LAB_10059cef7:
    local_3c = 0x822;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
LAB_10059ce2d:
  uVar7 = 0;
  FUN_1001782e9(0,0);
  goto LAB_10059ce38;
  while (lVar8 = lVar8 + 0xc, iVar4 * 0xc != (int)lVar8) {
LAB_10059cf3c:
    if ((*(int *)((long)puVar5 + lVar8) == local_70) &&
       (*(int *)((long)puVar5 + lVar8 + 4) == local_6c)) {
      uVar7 = *(undefined4 *)((long)puVar5 + lVar8 + 8);
      goto LAB_10059ce38;
    }
  }
LAB_10059cf4f:
  uVar7 = 0;
LAB_10059ce38:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


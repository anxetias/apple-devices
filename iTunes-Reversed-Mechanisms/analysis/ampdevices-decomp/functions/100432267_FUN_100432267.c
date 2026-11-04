// name: FUN_100432267
// address: 100432267

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100432267(undefined4 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  bool bVar12;
  undefined4 local_268;
  char *local_264;
  undefined2 local_25c;
  char *local_25a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_25a = "prefs != nullptr";
LAB_100432c29:
      local_25c = 0x822;
      local_264 = "Assertion failure";
      local_268 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
    }
  }
  else {
    *param_2 = 0;
    lVar6 = FUN_1004de449();
    if (lVar6 != 0) {
      lVar7 = FUN_10022aef0();
      if (lVar7 == 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_268 = 0x8220202;
          local_264 = "Assertion failure";
          local_25c = 0x822;
          local_25a = "thePrefs != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
        }
        FUN_1001782e9(0,0);
        uVar8 = 0xffffff94;
        goto LAB_100432bd5;
      }
      *(undefined1 *)(lVar7 + 4) = *(undefined1 *)(lVar6 + 0x6af2);
      uVar3 = FUN_1004f17ec(lVar6);
      *(undefined1 *)(lVar7 + 5) = uVar3;
      uVar3 = FUN_1004f1712(lVar6);
      *(undefined1 *)(lVar7 + 6) = uVar3;
      _memcpy((void *)(lVar7 + 0x280),(void *)(lVar6 + 0x14cd0),0x4d0);
      *(undefined4 *)(lVar7 + 0x750) = *(undefined4 *)(lVar6 + 0x284);
      *(undefined4 *)(lVar7 + 0x754) = *(undefined4 *)(lVar6 + 0x5c);
      *(undefined1 *)(lVar7 + 0x758) = *(undefined1 *)(lVar6 + 0x308);
      FUN_1001dfbb3(lVar6 + 0x106,lVar7 + 0x799,0x20);
      FUN_1001dfbb3(lVar6 + 0x66,lVar7 + 0x759,0x20);
      FUN_1001dfbb3(lVar6 + 0xc6,lVar7 + 0x779,0x20);
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x152f0));
      *(undefined8 *)(lVar7 + 0x7c0) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x152f8));
      *(undefined8 *)(lVar7 + 0x7c8) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15300));
      *(undefined8 *)(lVar7 + 2000) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15308));
      *(undefined8 *)(lVar7 + 0x7d8) = uVar8;
      uVar8 = FUN_1002c1336(*(undefined8 *)(lVar6 + 0x15310));
      *(undefined8 *)(lVar7 + 0x7e0) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15330));
      *(undefined8 *)(lVar7 + 0x7e8) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15338));
      *(undefined8 *)(lVar7 + 0x7f0) = uVar8;
      uVar8 = FUN_1002c1336(*(undefined8 *)(lVar6 + 0x15340));
      *(undefined8 *)(lVar7 + 0x7f8) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15348));
      *(undefined8 *)(lVar7 + 0x800) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15350));
      *(undefined8 *)(lVar7 + 0x808) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15358));
      *(undefined8 *)(lVar7 + 0x810) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15318));
      *(undefined8 *)(lVar7 + 0x818) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15320));
      *(undefined8 *)(lVar7 + 0x820) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15328));
      *(undefined8 *)(lVar7 + 0x828) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15360));
      *(undefined8 *)(lVar7 + 0x830) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15368));
      *(undefined8 *)(lVar7 + 0x838) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15370));
      *(undefined8 *)(lVar7 + 0x840) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15380));
      *(undefined8 *)(lVar7 + 0x848) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15388));
      *(undefined8 *)(lVar7 + 0x850) = uVar8;
      uVar8 = FUN_1002c09ee(*(undefined8 *)(lVar6 + 0x15390));
      *(undefined8 *)(lVar7 + 0x858) = uVar8;
      *(undefined1 *)(lVar7 + 7) = *(undefined1 *)(lVar6 + 0x36c);
      uVar3 = FUN_100266a70(*(undefined8 *)(lVar6 + 0x66d8));
      *(undefined1 *)(lVar7 + 8) = uVar3;
      *(undefined1 *)(lVar7 + 9) = *(undefined1 *)(lVar6 + 0x36d);
      *(undefined1 *)(lVar7 + 10) = *(undefined1 *)(lVar6 + 0x346);
      *(undefined1 *)(lVar7 + 0xb) = *(undefined1 *)(lVar6 + 0x34e);
      *(undefined1 *)(lVar7 + 0xc) = *(undefined1 *)(lVar6 + 0x34f);
      *(undefined1 *)(lVar7 + 0xd) = *(undefined1 *)(lVar6 + 0x350);
      *(undefined2 *)(lVar7 + 0xe) = 0x101;
      *(undefined1 *)(lVar7 + 0x10) = *(undefined1 *)(lVar6 + 0x33c);
      *(undefined1 *)(lVar7 + 0x11) = *(undefined1 *)(lVar6 + 0x33d);
      *(undefined1 *)(lVar7 + 0x12) = 1;
      *(undefined4 *)(lVar7 + 0x13) = *(undefined4 *)(lVar6 + 0x33e);
      *(undefined1 *)(lVar7 + 0x17) = *(undefined1 *)(lVar6 + 0x342);
      *(undefined1 *)(lVar7 + 0x18) = *(undefined1 *)(lVar6 + 0x345);
      if (*(char *)(lVar6 + 0x359) == '\0') {
        bVar12 = false;
      }
      else {
        bVar12 = *(char *)(lVar6 + 0x15218) != '\0';
      }
      *(bool *)(lVar7 + 0x19) = bVar12;
      *(undefined1 *)(lVar7 + 0x1a) = *(undefined1 *)(lVar6 + 0x35a);
      *(undefined1 *)(lVar7 + 0x1b) = *(undefined1 *)(lVar6 + 0x353);
      *(undefined1 *)(lVar7 + 0x1c) = *(undefined1 *)(lVar6 + 0x355);
      *(undefined1 *)(lVar7 + 0x1d) = *(undefined1 *)(lVar6 + 0x37d);
      bVar12 = true;
      if ((((*(char *)(lVar6 + 0x333) == '\0') && (*(char *)(lVar6 + 0x334) == '\0')) &&
          (*(char *)(lVar6 + 0x335) == '\0')) && (*(char *)(lVar6 + 0x336) == '\0')) {
        bVar12 = *(char *)(lVar6 + 0x337) != '\0';
      }
      *(bool *)(lVar7 + 0x1e) = bVar12;
      *(undefined1 *)(lVar7 + 0x1f) = *(undefined1 *)(lVar6 + 0x372);
      if (*(char *)(lVar6 + 0x332) == '\0') {
        bVar12 = false;
      }
      else {
        bVar12 = *(char *)(lVar6 + 0x396) != '\0';
      }
      *(bool *)(lVar7 + 0x20) = bVar12;
      *(undefined1 *)(lVar7 + 0x21) = *(undefined1 *)(lVar6 + 0x365);
      *(undefined1 *)(lVar7 + 0x22) = *(undefined1 *)(lVar6 + 0x39c);
      *(undefined1 *)(lVar7 + 0x23) = *(undefined1 *)(lVar6 + 0x39e);
      *(undefined1 *)(lVar7 + 0x24) = *(undefined1 *)(lVar6 + 0x39d);
      if (*(char *)(lVar6 + 0x37f) == '\0') {
        *(undefined2 *)(lVar7 + 0x25) = 0;
        *(undefined1 *)(lVar7 + 0x27) = 0;
        if (*(char *)(lVar6 + 0x3a5) == '\0') {
          bVar12 = false;
        }
        else {
          bVar12 = *(char *)(lVar6 + 0x6b03) == '\0';
        }
        *(bool *)(lVar7 + 0x28) = bVar12;
        if (*(char *)(lVar6 + 0x3a7) != '\0') goto LAB_10043277d;
        bVar12 = false;
      }
      else {
        *(uint *)(lVar7 + 0x25) =
             CONCAT13(-(*(char *)(lVar6 + 0x6b03) == '\0'),
                      CONCAT12(-(*(char *)(lVar6 + 0x6b02) == '\0'),
                               CONCAT11(-((char)((ushort)*(undefined2 *)(lVar6 + 0x6aff) >> 8) ==
                                         '\0'),-((char)*(undefined2 *)(lVar6 + 0x6aff) == '\0')))) &
             (uint)DAT_100718e10;
LAB_10043277d:
        bVar12 = *(char *)(lVar6 + 0x6b06) == '\0';
      }
      *(bool *)(lVar7 + 0x29) = bVar12;
      *(undefined1 *)(lVar7 + 0x2a) = *(undefined1 *)(lVar6 + 0x37a);
      *(undefined1 *)(lVar7 + 0x2b) = *(undefined1 *)(lVar6 + 0x37b);
      *(undefined2 *)(lVar7 + 0x2c) = 0x101;
      *(undefined1 *)(lVar7 + 0x2e) = 0;
      *(undefined1 *)(lVar7 + 0x2f) = *(undefined1 *)(lVar6 + 0x388);
      bVar12 = true;
      if (*(char *)(lVar6 + 0x38a) == '\0') {
        bVar12 = *(char *)(lVar6 + 0x394) != '\0';
      }
      *(bool *)(lVar7 + 0x30) = bVar12;
      *(undefined1 *)(lVar7 + 0x31) = *(undefined1 *)(lVar6 + 0x39b);
      if (*(char *)(lVar6 + 0x399) == '\0') {
        *(undefined1 *)(lVar7 + 0x32) = 0;
        bVar4 = 0;
      }
      else {
        iVar1 = *(int *)(lVar6 + 0x66b0);
        *(bool *)(lVar7 + 0x32) = iVar1 == 0x69506f64;
        bVar11 = 1;
        if (((iVar1 != 0x69506164) && (iVar1 != 0x6950686e)) && (iVar1 != 0x69506f74)) {
          bVar11 = 0;
        }
        bVar4 = FUN_1002669ba(*(undefined8 *)(lVar6 + 0x66d8));
        bVar4 = bVar4 & bVar11;
      }
      *(byte *)(lVar7 + 0x33) = bVar4;
      *(undefined1 *)(lVar7 + 0x34) = *(undefined1 *)(lVar6 + 0x3a2);
      *(undefined1 *)(lVar7 + 0x35) = *(undefined1 *)(lVar6 + 0x3ac);
      uVar2 = *(uint *)(lVar6 + 0x166e0);
      bVar4 = (byte)uVar2;
      *(byte *)(lVar7 + 0x36) = bVar4 >> 2 & 1;
      *(byte *)(lVar7 + 0x37) = bVar4 >> 3 & 1;
      *(undefined1 *)(lVar7 + 0x42) = 0;
      *(undefined1 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(byte *)(lVar7 + 0x43) = (byte)(uVar2 >> 10) & 1;
      if (*(char *)(lVar6 + 0x35a) == '\0') {
        *(undefined1 *)(lVar7 + 0x44) = 0;
        bVar4 = 0;
      }
      else {
        bVar12 = true;
        if (((*(char *)(DAT_1008c76a0 + 0x1a94) == '\0') &&
            (*(char *)(DAT_1008c76a0 + 0x1a91) == '\0')) &&
           ((*(char *)(DAT_1008c76a0 + 0x1a92) == '\0' &&
            (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0')))) {
          bVar12 = *(ushort *)(lVar6 + 100) < 0x400;
        }
        *(bool *)(lVar7 + 0x44) = bVar12;
        bVar4 = FUN_1004e135b(lVar6);
        bVar4 = bVar4 ^ 1;
      }
      *(byte *)(lVar7 + 0x45) = bVar4;
      uVar3 = FUN_100266904(*(undefined8 *)(lVar6 + 0x66d8));
      *(undefined1 *)(lVar7 + 0x59) = uVar3;
      uVar3 = FUN_100266a70(*(undefined8 *)(lVar6 + 0x66d8));
      *(undefined1 *)(lVar7 + 0x5b) = uVar3;
      uVar3 = FUN_100266b26(*(undefined8 *)(lVar6 + 0x66d8));
      *(undefined1 *)(lVar7 + 0x5c) = uVar3;
      *(undefined1 *)(lVar7 + 0x5a) = *(undefined1 *)(lVar6 + 0x35c);
      *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar6 + 0x410);
      *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(lVar6 + 0x6ae0);
      *(undefined4 *)(lVar7 + 100) = *(undefined4 *)(lVar6 + 0x6f60);
      *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(lVar6 + 0x153a0);
      *(undefined1 *)(lVar7 + 0xd30) = *(undefined1 *)(lVar6 + 0x6abf);
      *(undefined1 *)(lVar7 + 0xd31) = *(undefined1 *)(lVar6 + 0x6ac2);
      *(undefined1 *)(lVar7 + 0xd54) = *(undefined1 *)(lVar6 + 0x42d);
      *(undefined1 *)(lVar7 + 0xd55) = *(undefined1 *)(lVar6 + 0x42e);
      *(undefined1 *)(lVar7 + 0xd56) = *(undefined1 *)(lVar6 + 0x15958);
      *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar6 + 1000);
      FUN_1001e04f5(lVar6 + 0x144,lVar7 + 0x80);
      if ((*(char *)(lVar6 + 0x367) != '\0') && (*(char *)(lVar6 + 0x14d56) == '\0')) {
        FUN_1001c62d9(lVar7 + 0x308,0x10);
      }
      if (*(char *)(lVar7 + 0x28a) == '\0') {
        if ((*(char *)(lVar7 + 9) != '\0') && (*(char *)(lVar6 + 0x6abf) == '\0')) {
          *(undefined1 *)(lVar7 + 0x28a) = 1;
        }
      }
      else if (*(char *)(lVar6 + 0x6abf) == '\0') {
        *(undefined1 *)(lVar7 + 0x31c) = 0;
        *(undefined1 *)(lVar7 + 0x318) = 0;
        *(undefined1 *)(lVar7 + 0x328) = 0;
        *(undefined1 *)(lVar7 + 0x39c) = 0;
        *(undefined1 *)(lVar7 + 0x39e) = 0;
      }
      if (*(char *)(lVar6 + 0x6ac2) == '\0') {
        *(undefined1 *)(lVar7 + 0x2da) = 0;
      }
      if (*(char *)(lVar7 + 0x10) != '\0') {
        *(undefined1 *)(lVar7 + 0x58) = *(undefined1 *)(lVar6 + 0x6add);
        *(undefined1 *)(lVar7 + 0xd32) = *(undefined1 *)(lVar6 + 0x6ac1);
      }
      FUN_100432caa(lVar7 + 0x860,*(undefined8 *)(lVar6 + 0x151a0));
      if (*(char *)(lVar7 + 0x19) != '\0') {
        *(undefined1 *)(lVar7 + 0xd39) = *(undefined1 *)(lVar6 + 0x6ac3);
        uVar8 = FUN_1004e8236(lVar6);
        *(undefined8 *)(lVar7 + 0xd40) = uVar8;
        *(undefined4 *)(lVar7 + 0xd48) = 3;
        *(undefined8 *)(lVar7 + 0xd4c) = *(undefined8 *)(lVar6 + 0x665c);
      }
      if (*(char *)(lVar7 + 0x32) != '\0') {
        *(undefined1 *)(lVar7 + 0xd57) = *(undefined1 *)(lVar6 + 0x16648);
        *(undefined1 *)(lVar7 + 0xd58) = *(undefined1 *)(lVar6 + 0x16649);
        *(undefined1 *)(lVar7 + 0xd59) = *(undefined1 *)(lVar6 + 0x1664a);
        uVar8 = *(undefined8 *)(lVar6 + 0x66d8);
        uVar9 = _CFArrayGetTypeID();
        lVar10 = FUN_10059ca0a(uVar8,&cf_LanguagesWithoutVoice,uVar9);
        if (lVar10 == 0) {
          *(undefined1 *)(lVar7 + 0xd5a) = 1;
        }
        else {
          uVar8 = FUN_1001734f5(DAT_1008c4d90,lVar6 + 0x438,0x8000100,
                                *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
          cVar5 = FUN_100164756(lVar10,uVar8);
          *(bool *)(lVar7 + 0xd5a) = cVar5 == '\0';
          FUN_10017060f(uVar8);
        }
      }
      if (*(char *)(lVar6 + 0x38c) != '\0') {
        uVar8 = FUN_100502d4c(param_1);
        *(undefined8 *)(lVar7 + 0xd60) = uVar8;
      }
      if (*(char *)(lVar6 + 0x3a1) != '\0') {
        *(undefined1 *)(lVar7 + 0xd68) = *(undefined1 *)(lVar6 + 0x151e2);
      }
      if (*(char *)(lVar6 + 0x3a3) != '\0') {
        *(undefined1 *)(lVar7 + 0xd69) = *(undefined1 *)(lVar6 + 0x151e5);
      }
      if (*(long *)(lVar6 + 0x30) != 0) {
        FUN_100317e16(*(long *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x6f60),&local_268);
        FUN_10022b77d(lVar7,&local_268);
      }
      *param_2 = lVar7;
      uVar8 = 0;
      goto LAB_100432bd5;
    }
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_25a = "handlerData != nullptr";
      goto LAB_100432c29;
    }
  }
  FUN_1001782e9(0,0);
  uVar8 = 0xffffffce;
LAB_100432bd5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


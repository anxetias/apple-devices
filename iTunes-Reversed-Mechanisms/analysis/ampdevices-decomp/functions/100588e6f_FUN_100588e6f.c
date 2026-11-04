// name: FUN_100588e6f
// address: 100588e6f

undefined4 * FUN_100588e6f(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  size_t sVar9;
  char local_10b8 [80];
  long local_1068;
  undefined8 local_1060 [2];
  undefined1 local_1049;
  uint local_1048;
  undefined8 local_1044;
  undefined8 local_448 [131];
  undefined8 uStack_30;
  long local_28;
  
  uStack_30 = 0x100588e83;
  lVar6 = FUN_100108310();
  lVar6 = -lVar6;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((DAT_1008c2f90 == 1) && (DAT_1008c2690 == 0)) {
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100588ebd;
    iVar4 = FUN_10017d477(&DAT_1008c2698,local_10b8,0);
    if (iVar4 == 0) goto LAB_100588ed7;
    DAT_1008c2f90 = 0;
  }
  else {
LAB_100588ed7:
    if ((DAT_1008c2f90 & DAT_1008c2688 != 0x1b5d) != 0) goto LAB_100589743;
  }
  iVar4 = DAT_1008c2688;
  *(undefined8 *)((long)&local_28 + lVar6) = 0x100588ef5;
  FUN_100588e02();
  *(undefined8 *)((long)&local_28 + lVar6) = 0x100588eff;
  lVar7 = FUN_1001c63e1(0x11c7c);
  *(undefined8 *)((long)&local_28 + lVar6) = 0x100588f0a;
  DAT_1008c268d = FUN_1002e2fe0(lVar7);
  if (*(short *)(lVar7 + 0x51d4) == 0) {
LAB_100589171:
    DAT_1008c268f = '\0';
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100589190;
    iVar5 = FUN_100193150(0xffff8005,0xb5646f63,0,&local_1048);
    if (iVar5 == 0) {
      *(undefined8 *)((long)&local_28 + lVar6) = 0x1005891b4;
      iVar5 = FUN_1001888ba(&local_1048,"iTunes",local_448,0);
      if (iVar5 == 0) {
        DAT_1008c268f = '\x01';
        *(undefined8 *)((long)&local_28 + lVar6) = 0x1005891db;
        DAT_1008c2ab8 = FUN_100387b5c(0x3e9,0x80,0,&DAT_1008c2ac0);
        if (DAT_1008c2ab8 == 0) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x1005891fc;
          FUN_1001b7b04(local_1060,"iTunes Library.itl");
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058920f;
          FUN_1001b80b2(&DAT_1008c2f70,local_1060);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058921b;
          FUN_1001b7a50(local_1060);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x100589237;
          DAT_1008c2690 = FUN_100188963(&DAT_1008c2ac0,&DAT_1008c2f70,&DAT_1008c2698,0);
          if (DAT_1008c2690 == 0) {
LAB_1005892a2:
            *(undefined8 *)((long)&local_28 + lVar6) = 0x1005892b1;
            DAT_1008c2690 = FUN_10058879d(&DAT_1008c2698,&DAT_1008c2698);
          }
          else {
            *(undefined8 *)((long)&local_28 + lVar6) = 0x10058925d;
            DAT_1008c2690 = FUN_1001888ba(&DAT_1008c2ac0,"iTunes Library",&DAT_1008c2698,0);
            if (DAT_1008c2690 == 0) {
              *(undefined8 *)((long)&local_28 + lVar6) = 0x10058927a;
              FUN_1001b7b04(local_1060,"iTunes Library");
              *(undefined8 *)((long)&local_28 + lVar6) = 0x10058928d;
              FUN_1001b80b2(&DAT_1008c2f70,local_1060);
              *(undefined8 *)((long)&local_28 + lVar6) = 0x100589299;
              FUN_1001b7a50(local_1060);
              if (DAT_1008c2690 == 0) goto LAB_1005892a2;
            }
          }
        }
      }
    }
  }
  else {
    DAT_1008c268c = '\x01';
    DAT_1008c268e = '\x01';
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100588f48;
    DAT_1008c268f = DAT_1008c268d;
    FUN_1001b8dfc(&local_1048,lVar7 + 0x51d4);
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100588f5b;
    FUN_1001b80b2(&DAT_1008c2f70,&local_1048);
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100588f67;
    FUN_1001b7a50(&local_1048);
    local_448[0] = 0;
    local_1060[0] = 0;
    local_1068 = 0;
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100588f83;
    uVar8 = FUN_10027929c();
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100588fa6;
    iVar5 = FUN_1001ce017(uVar8,0x626f6f6b,1,"iTunes Library Location",local_448,0);
    if (iVar5 == 0) {
      *(undefined8 *)((long)&local_28 + lVar6) = 0x1005890d1;
      iVar5 = FUN_100170286(local_448[0],&DAT_1008c2ac0,0,&local_1049,local_10b8);
      DAT_1008c2ab8 = -0x57f;
      if (local_10b8[0] != '\0') {
        DAT_1008c2ab8 = iVar5;
      }
      if (iVar5 != 0) {
        DAT_1008c2ab8 = iVar5;
      }
      bVar1 = true;
      if (DAT_1008c2ab8 != 0) {
        uVar8 = *(undefined8 *)PTR__kCFURLPathKey_10082e158;
        bVar1 = false;
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589110;
        local_1068 = _CFURLCreateResourcePropertyForKeyFromBookmarkData(0,uVar8,local_448[0]);
        if (local_1068 != 0) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058912b;
          FUN_1001b7eb0(&local_1048,local_1068);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058913e;
          FUN_1001b80b2(&DAT_1008c2f80,&local_1048);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058914a;
          FUN_1001b7a50(&local_1048);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x100589156;
          FUN_10017060f(local_1068);
          bVar1 = true;
        }
      }
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589168;
      FUN_10017060f(local_448[0]);
    }
    else {
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100588fb3;
      uVar8 = FUN_10027929c();
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100588fd3;
      iVar5 = FUN_1001ce557(uVar8,0x616c6973,1,"iTunes Library Location",local_1060);
      if (iVar5 != 0) goto LAB_100589171;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100588ff8;
      DAT_1008c2ab8 = FUN_10018e502(0,0x102,local_1060[0],&DAT_1008c2ac0,0);
      if (DAT_1008c2ab8 == 0) {
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589017;
        iVar5 = FUN_10017d477(&DAT_1008c2ac0,local_10b8,0);
        DAT_1008c2ab8 = -0x57f;
        if (local_10b8[0] != '\0') {
          DAT_1008c2ab8 = iVar5;
        }
        if (iVar5 != 0) {
          DAT_1008c2ab8 = iVar5;
        }
        if (DAT_1008c2ab8 != 0) goto LAB_100589035;
LAB_100589097:
        bVar1 = true;
      }
      else {
LAB_100589035:
        bVar1 = false;
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589055;
        iVar5 = _FSCopyAliasInfo(local_1060[0],0,0,&local_1068,0,0);
        if (iVar5 == 0) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058906c;
          FUN_1001b7eb0(&local_1048,local_1068);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058907f;
          FUN_1001b80b2(&DAT_1008c2f80,&local_1048);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x10058908b;
          FUN_1001b7a50(&local_1048);
          *(undefined8 *)((long)&local_28 + lVar6) = 0x100589097;
          FUN_10017060f(local_1068);
          goto LAB_100589097;
        }
      }
      *(undefined8 *)((long)&local_28 + lVar6) = 0x1005890a9;
      _DisposeHandle(local_1060[0]);
    }
    if (!bVar1) goto LAB_100589171;
  }
  if ((DAT_1008c2690 == -1) && (DAT_1008c2ab8 == 0)) {
    *(undefined8 *)((long)&local_28 + lVar6) = 0x1005892d5;
    cVar2 = FUN_1001b8428(&DAT_1008c2f70);
    if (cVar2 == '\0') {
      *(undefined8 *)((long)&local_28 + lVar6) = 0x1005892f5;
      DAT_1008c2690 = FUN_100188963(&DAT_1008c2ac0,&DAT_1008c2f70,&DAT_1008c2698,0);
      if (DAT_1008c2690 == 0) {
        *(undefined8 *)((long)&local_28 + lVar6) = 0x10058930e;
        DAT_1008c2690 = FUN_10058879d(&DAT_1008c2698,&DAT_1008c2698);
      }
    }
  }
  *(undefined8 *)((long)&local_28 + lVar6) = 0x100589320;
  bVar3 = FUN_1001b8428(&DAT_1008c2f80);
  if ((bVar3 & DAT_1008c2ab8 == 0) == 1) {
    local_1048 = local_1048 & 0xffffff00;
    *(undefined8 *)((long)&local_28 + lVar6) = 0x10058934b;
    iVar5 = FUN_10017de88(&DAT_1008c2ac0,&local_1048,0xbfd);
    if (iVar5 == 0) {
      *(undefined8 *)((long)&local_28 + lVar6) = 0x10058935e;
      sVar9 = _strlen((char *)&local_1048);
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589370;
      FUN_1001b7b34(local_448,&local_1048,sVar9);
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589383;
      FUN_1001b80b2(&DAT_1008c2f80,local_448);
      *(undefined8 *)((long)&local_28 + lVar6) = 0x10058938f;
      FUN_1001b7a50(local_448);
    }
  }
  DAT_1008c2688 = DAT_1008c2690;
  if (DAT_1008c2690 == 0) {
    *(undefined8 *)((long)&local_28 + lVar6) = 0x1005893cb;
    DAT_1008c2688 = FUN_100588332(&DAT_1008c2698,&DAT_1008c2ee0);
    if (DAT_1008c2688 == 0) {
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589778;
      DAT_1008c2688 = FUN_100588b45(&DAT_1008c2ee0);
    }
  }
  else {
    DAT_1008c2688 = 0x1b5d;
    if (DAT_1008c268f == '\0') {
      DAT_1008c2688 = 0;
    }
  }
  if (DAT_1008c2688 != iVar4) {
    if (DAT_1008c66e8 != -1) {
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589790;
      _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
    }
    uVar8 = DAT_1008c66e0;
    *(undefined8 *)((long)&local_28 + lVar6) = 0x100589401;
    cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
    if (cVar2 != '\0') {
      local_1048 = 0x4000100;
      local_1044 = CONCAT44(local_1044._4_4_,DAT_1008c2688);
      *(undefined8 *)((long)&local_28 + lVar6) = 0x10058943b;
      __os_log_impl(0x100000000,uVar8,0,"itunes> overallStatus = %d",&local_1048,8);
    }
    if (DAT_1008c2688 != 0) {
      if (DAT_1008c66e8 != -1) {
        *(undefined8 *)((long)&local_28 + lVar6) = 0x1005897a8;
        _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589467;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        local_1048 = 0x4000100;
        local_1044 = CONCAT44(local_1044._4_4_,(uint)(DAT_1008c268c != '\0'));
        *(undefined8 *)((long)&local_28 + lVar6) = 0x1005894a7;
        __os_log_impl(0x100000000,uVar8,0,"itunes> isCustomLibrary = %d",&local_1048,8);
        if (DAT_1008c66e8 != -1) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x1005897c0;
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x1005894c6;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        local_1048 = 0x4000100;
        local_1044 = CONCAT44(local_1044._4_4_,(uint)(DAT_1008c268d != '\0'));
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589506;
        __os_log_impl(0x100000000,uVar8,0,"itunes> haveITunesPrefs = %d",&local_1048,8);
        if (DAT_1008c66e8 != -1) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x1005897d8;
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589525;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        local_1048 = 0x4000100;
        local_1044 = CONCAT44(local_1044._4_4_,(uint)(DAT_1008c268e != '\0'));
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589565;
        __os_log_impl(0x100000000,uVar8,0,"itunes> fromITunesPrefs = %d",&local_1048,8);
        if (DAT_1008c66e8 != -1) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x1005897f0;
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589584;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        local_1048 = 0x4000100;
        local_1044 = CONCAT44(local_1044._4_4_,(uint)(DAT_1008c268f != '\0'));
        *(undefined8 *)((long)&local_28 + lVar6) = 0x1005895c4;
        __os_log_impl(0x100000000,uVar8,0,"itunes> wasITunesUser = %d",&local_1048,8);
        if (DAT_1008c66e8 != -1) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x100589808;
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x1005895e3;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        local_1048 = 0x4000100;
        local_1044 = CONCAT44(local_1044._4_4_,DAT_1008c2690);
        *(undefined8 *)((long)&local_28 + lVar6) = 0x10058961d;
        __os_log_impl(0x100000000,uVar8,0,"itunes> libraryFileSpecStatus = %d",&local_1048,8);
        if (DAT_1008c66e8 != -1) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x100589820;
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x10058963c;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        local_1048 = 0x4000100;
        local_1044 = CONCAT44(local_1044._4_4_,DAT_1008c2ab8);
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589676;
        __os_log_impl(0x100000000,uVar8,0,"itunes> parentFolderSpecStatus = %d",&local_1048,8);
        if (DAT_1008c66e8 != -1) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x100589838;
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x100589695;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_28 + lVar6) = 0x1005896a5;
        local_1044 = FUN_1001b83ae(&DAT_1008c2f70);
        local_1048 = 0x8200102;
        *(undefined8 *)((long)&local_28 + lVar6) = 0x1005896d5;
        __os_log_impl(0x100000000,uVar8,0,"itunes> libraryFileName = %s",&local_1048,0xc);
        if (DAT_1008c66e8 != -1) {
          *(undefined8 *)((long)&local_28 + lVar6) = 0x100589850;
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
      }
      uVar8 = DAT_1008c66e0;
      *(undefined8 *)((long)&local_28 + lVar6) = 0x1005896f4;
      cVar2 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589704;
        local_1044 = FUN_1001b83ae(&DAT_1008c2f80);
        local_1048 = 0x8200102;
        *(undefined8 *)((long)&local_28 + lVar6) = 0x100589734;
        __os_log_impl(0x100000000,uVar8,0,"itunes> parentFolderRawPath = %s",&local_1048,0xc);
      }
    }
  }
  DAT_1008c2f90 = 1;
  *(undefined8 *)((long)&local_28 + lVar6) = 0x100589743;
  FUN_1001c64c1(lVar7);
LAB_100589743:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_28 + lVar6) = &UNK_10058985a;
    ___stack_chk_fail();
  }
  return &DAT_1008c2688;
}


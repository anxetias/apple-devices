// name: FUN_1003b25c6
// address: 1003b25c6

int FUN_1003b25c6(ulong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar9;
  ulong *puVar10;
  uint *puVar11;
  long local_660;
  uint local_658;
  uint uStack_654;
  undefined4 uStack_650;
  undefined2 local_64c;
  int local_64a;
  uint local_638;
  char *local_634;
  undefined2 local_62c;
  int local_62a;
  undefined2 local_238;
  long local_30;
  ulong uVar8;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (ulong *)0x0) {
    iVar3 = 0;
    goto LAB_1003b4b9d;
  }
  if ((*param_1 & 0x20000) == 0) {
LAB_1003b25ff:
    uVar8 = *param_1;
    if (((uint)uVar8 >> 10 & 1) != 0) {
      iVar3 = FUN_1001cb009(param_2,0x61704944,param_1 + 0x19);
      if (iVar3 == -0x80) goto LAB_1003b4b9d;
      if (iVar3 != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') goto LAB_1003b4b9d;
        puVar11 = &local_638;
        local_638 = 0x8220202;
        local_634 = "Assertion failure";
        local_62c = 0x400;
        local_62a = iVar3;
        goto LAB_1003b4b8a;
      }
      uVar8 = *param_1;
    }
    uVar9 = param_1[1];
    if ((uVar9 & 2) != 0) {
      iVar3 = FUN_1001cb009(param_2,0x6f776e72,param_1 + 0x59);
      if (iVar3 == -0x80) goto LAB_1003b4b9d;
      if (iVar3 != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') goto LAB_1003b4b9d;
        puVar11 = &local_638;
        local_638 = 0x8220202;
        local_634 = "Assertion failure";
        local_62c = 0x400;
        local_62a = iVar3;
        goto LAB_1003b4b8a;
      }
      uVar8 = *param_1;
      uVar9 = param_1[1];
    }
    if ((((uint)uVar8 >> 10 & 1) != 0) && ((short)param_1[0x99] != 0)) {
      iVar3 = FUN_1001cb009(param_2,0x64774944,param_1 + 0x99);
      if (iVar3 == -0x80) goto LAB_1003b4b9d;
      if (iVar3 != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') goto LAB_1003b4b9d;
        puVar11 = &local_638;
        local_638 = 0x8220202;
        local_634 = "Assertion failure";
        local_62c = 0x400;
        local_62a = iVar3;
        goto LAB_1003b4b8a;
      }
      uVar8 = *param_1;
      uVar9 = param_1[1];
    }
    if (((uVar9 & 2) != 0) && ((short)param_1[0xd9] != 0)) {
      iVar3 = FUN_1001cb009(param_2,0x64776c72,param_1 + 0xd9);
      if (iVar3 == -0x80) goto LAB_1003b4b9d;
      if (iVar3 != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') goto LAB_1003b4b9d;
        puVar11 = &local_638;
        local_638 = 0x8220202;
        local_634 = "Assertion failure";
        local_62c = 0x400;
        local_62a = iVar3;
        goto LAB_1003b4b8a;
      }
      uVar8 = *param_1;
    }
    if (((uint)uVar8 >> 0xc & 1) != 0) {
      iVar3 = FUN_1001cb009(param_2,0x63707274,param_1 + 0x119);
      if (iVar3 == -0x80) goto LAB_1003b4b9d;
      if (iVar3 != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') goto LAB_1003b4b9d;
        puVar11 = &local_638;
        local_638 = 0x8220202;
        local_634 = "Assertion failure";
        local_62c = 0x400;
        local_62a = iVar3;
        goto LAB_1003b4b8a;
      }
      uVar8 = *param_1;
    }
    if (((uint)uVar8 >> 0xb & 1) == 0) {
LAB_1003b271c:
      if (((uint)uVar8 >> 0xd & 1) == 0) {
LAB_1003b2726:
        if (((uint)uVar8 >> 0xe & 1) == 0) {
LAB_1003b2730:
          if (((uint)uVar8 >> 0x14 & 1) == 0) {
LAB_1003b273a:
            if ((short)uVar8 < 0) {
              uVar8 = *(ulong *)((long)param_1 + 0xcec);
              uVar1 = (uint)(uVar8 >> 0x18);
              uVar5 = (uint)(uVar8 >> 8);
              local_658 = (uint)(byte)(uVar8 >> 0x38) | ((uint)(uVar8 >> 0x20) & 0xff0000) >> 8 |
                          uVar1 & 0xff0000 | uVar5 & 0xff000000;
              uStack_654 = uVar1 & 0xff | uVar5 & 0xff00 |
                           (uint)(((uVar8 & 0xff00) << 0x28) >> 0x20) |
                           (uint)((uVar8 << 0x38) >> 0x20);
              iVar3 = FUN_1001c955b(param_2,0x706c4944,0,0,&local_660);
              if (iVar3 == -0x80) goto LAB_1003b4b9d;
              if (iVar3 == 0) {
                if (local_660 == 0) {
                  iVar3 = FUN_1001c9b1d(param_2,&local_660);
                  if (iVar3 == -0x80) goto LAB_1003b4b9d;
                  if (iVar3 == 0) {
                    iVar3 = FUN_1001c9f0c(local_660,0x706c4944,0,0);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 == 0) goto LAB_1003b2e7a;
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 == '\0') goto LAB_1003b4b9d;
                    puVar11 = &local_638;
                    local_638 = 0x8220202;
                    local_634 = "Assertion failure";
                    local_62c = 0x400;
                    local_62a = iVar3;
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 == '\0') goto LAB_1003b4b9d;
                    puVar11 = &local_638;
                    local_638 = 0x8220202;
                    local_634 = "Assertion failure";
                    local_62c = 0x400;
                    local_62a = iVar3;
                  }
                }
                else {
LAB_1003b2e7a:
                  iVar3 = FUN_1001cacbc(local_660,1,0x15,&local_658,8);
                  if (iVar3 == -0x80) goto LAB_1003b4b9d;
                  if (iVar3 == 0) {
                    uVar8 = *param_1;
                    goto LAB_1003b2743;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 == '\0') goto LAB_1003b4b9d;
                  puVar11 = &local_638;
                  local_638 = 0x8220202;
                  local_634 = "Assertion failure";
                  local_62c = 0x400;
                  local_62a = iVar3;
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 == '\0') goto LAB_1003b4b9d;
                puVar11 = &local_638;
                local_638 = 0x8220202;
                local_634 = "Assertion failure";
                local_62c = 0x400;
                local_62a = iVar3;
              }
            }
            else {
LAB_1003b2743:
              if (((uint)uVar8 >> 0x10 & 1) == 0) {
LAB_1003b274d:
                if (((uint)uVar8 >> 0x19 & 1) == 0) {
LAB_1003b2757:
                  if (((uint)uVar8 >> 0x11 & 1) != 0) {
                    iVar3 = FUN_1001cb009(param_2,0xa9646179,param_1 + 0x159);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                  }
                  if (((uint)uVar8 >> 0x1a & 1) != 0) {
                    iVar3 = FUN_1001cb009(param_2,0x63617467,(long)param_1 + 0x15c4);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                  }
                  if (((uint)uVar8 >> 0x1b & 1) != 0) {
                    iVar3 = FUN_1001cb009(param_2,0x64657363,(long)param_1 + 0x17c4);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                  }
                  iVar4 = 0;
                  if ((uVar8 >> 0x3a & 1) != 0) {
                    if (*(short *)((long)param_1 + 0x4c) == 0) {
                      iVar4 = FUN_1001cbec1(param_2,0x68647664);
                    }
                    else {
                      local_658 = CONCAT31(local_658._1_3_,(char)*(short *)((long)param_1 + 0x4c));
                      iVar3 = FUN_1001cb5de(param_2,0x68647664,&local_658,1);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                    }
                  }
                  iVar3 = iVar4;
                  if ((*(byte *)((long)param_1 + 9) & 4) != 0) {
                    if (*(char *)((long)param_1 + 0x2e22) == '\x01') {
                      iVar3 = FUN_1001cb5de(param_2,0x7368636d,(long)param_1 + 0x2e22,1);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                    }
                    else {
                      iVar3 = FUN_1001cbec1(param_2,0x7368636d);
                    }
                  }
                  uVar8 = *param_1;
                  if ((uVar8 >> 0x20 & 1) != 0) {
                    iVar3 = FUN_1001cb009(param_2,0x74767368,(long)param_1 + 0x19c4);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                    iVar3 = 0;
                  }
                  if ((uVar8 >> 0x22 & 1) != 0) {
                    iVar3 = FUN_1001cb009(param_2,0x7476656e,(long)param_1 + 0x1bc4);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                    iVar3 = 0;
                  }
                  if ((uVar8 >> 0x21 & 1) != 0) {
                    iVar3 = FUN_1001cb5de(param_2,0x7476736e,param_1 + 0x3b9,4);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                    iVar3 = 0;
                  }
                  if ((uVar8 >> 0x23 & 1) != 0) {
                    iVar3 = FUN_1001cb5de(param_2,0x74766573,(long)param_1 + 0x1dc4,4);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                    iVar3 = 0;
                  }
                  if ((uVar8 >> 0x25 & 1) != 0) {
                    iVar3 = FUN_1001cb5de(param_2,0x7374696b,param_1 + 0x1a1,1);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                    iVar3 = 0;
                  }
                  if ((uVar8 >> 0x27 & 1) != 0) {
                    iVar3 = FUN_1001cb50f(param_2,0x70757264,*(undefined4 *)((long)param_1 + 0xcfc))
                    ;
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                      goto LAB_1003b4b8a;
                    }
                    uVar8 = *param_1;
                    iVar3 = 0;
                  }
                  if (((uint)uVar8 >> 0x15 & 1) == 0) {
LAB_1003b3b5a:
                    if ((uVar8 >> 0x2d & 1) != 0) {
                      puVar10 = param_1 + 0x43d;
                      if (((uVar8 >> 0x33 & 1) != 0) && ((char)param_1[0x5bd] < '\0')) {
                        puVar10 = (ulong *)&DAT_100712030;
                      }
                      iVar3 = FUN_1001cb009(param_2,0x736f6e6d,puVar10);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar8 = *param_1;
                      iVar3 = 0;
                    }
                    if ((uVar8 >> 0x2e & 1) != 0) {
                      puVar10 = param_1 + 0x47d;
                      if (((uVar8 >> 0x34 & 1) != 0) && (*(char *)((long)param_1 + 0x2de9) < '\0'))
                      {
                        puVar10 = (ulong *)&DAT_100712030;
                      }
                      iVar3 = FUN_1001cb009(param_2,0x736f616c,puVar10);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar8 = *param_1;
                      iVar3 = 0;
                    }
                    if ((uVar8 >> 0x2f & 1) != 0) {
                      puVar10 = param_1 + 0x4bd;
                      if (((uVar8 >> 0x35 & 1) != 0) && (*(char *)((long)param_1 + 0x2dea) < '\0'))
                      {
                        puVar10 = (ulong *)&DAT_100712030;
                      }
                      iVar3 = FUN_1001cb009(param_2,0x736f6172,puVar10);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar8 = *param_1;
                      iVar3 = 0;
                    }
                    if ((uVar8 >> 0x30 & 1) != 0) {
                      puVar10 = param_1 + 0x4fd;
                      if (((uVar8 >> 0x36 & 1) != 0) && (*(char *)((long)param_1 + 0x2deb) < '\0'))
                      {
                        puVar10 = (ulong *)&DAT_100712030;
                      }
                      iVar3 = FUN_1001cb009(param_2,0x736f6161,puVar10);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar8 = *param_1;
                      iVar3 = 0;
                    }
                    if ((uVar8 >> 0x31 & 1) != 0) {
                      puVar10 = param_1 + 0x53d;
                      if (((uVar8 >> 0x37 & 1) != 0) && (*(char *)((long)param_1 + 0x2dec) < '\0'))
                      {
                        puVar10 = (ulong *)&DAT_100712030;
                      }
                      iVar3 = FUN_1001cb009(param_2,0x736f636f,puVar10);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar8 = *param_1;
                      iVar3 = 0;
                    }
                    if ((uVar8 >> 0x32 & 1) != 0) {
                      puVar10 = param_1 + 0x57d;
                      if (((uVar8 >> 0x38 & 1) != 0) && (*(char *)((long)param_1 + 0x2ded) < '\0'))
                      {
                        puVar10 = (ulong *)&DAT_100712030;
                      }
                      iVar3 = FUN_1001cb009(param_2,0x736f736e,puVar10);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar8 = *param_1;
                      iVar3 = 0;
                    }
                    if ((uVar8 >> 0x3e & 1) != 0) {
                      iVar3 = FUN_1001cb009(param_2,0x78696420,(long)param_1 + 0xd24);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar8 = *param_1;
                      iVar3 = 0;
                    }
                    uVar5 = (uint)uVar8;
                    if ((uVar5 >> 0x13 & 1) != 0) {
                      iVar3 = FUN_1001cb009(param_2,0x666c7672,(long)param_1 + 0xf24);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                        goto LAB_1003b4b8a;
                      }
                      uVar5 = (uint)*param_1;
                      iVar3 = 0;
                    }
                    if ((uVar5 >> 0x12 & 1) == 0) goto LAB_1003b3d8b;
                    iVar3 = FUN_1001c97e8(param_2,0x2d2d2d2d,"com.apple.iTunes",0x10,"iTunEXTC",8,
                                          &local_660);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 == 0) {
                      if ((short)param_1[0x3fd] == 0) {
                        if (local_660 == 0) {
                          iVar3 = 0;
                        }
                        else {
                          iVar3 = FUN_1001c9e7d(param_2);
                          if (iVar3 == -0x80) goto LAB_1003b4b9d;
                          if (iVar3 != 0) {
                            uVar7 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar2 == '\0') goto LAB_1003b4b9d;
                            puVar11 = &local_638;
                            local_638 = 0x8220202;
                            local_634 = "Assertion failure";
                            local_62c = 0x400;
                            local_62a = iVar3;
                            goto LAB_1003b4b8a;
                          }
                        }
LAB_1003b3d8b:
                        uVar5 = (uint)param_1[1];
                        if ((uVar5 >> 0xb & 1) != 0) {
                          iVar3 = FUN_1001cb009(param_2,0xa977726b,(long)param_1 + 0x2e24);
                          if (iVar3 == -0x80) goto LAB_1003b4b9d;
                          if (iVar3 != 0) {
                            uVar7 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar2 == '\0') goto LAB_1003b4b9d;
                            puVar11 = &local_658;
                            local_658 = 0x8220202;
                            uStack_654 = 0x7a0a90;
                            uStack_650 = 1;
                            local_64c = 0x400;
                            local_64a = iVar3;
                            goto LAB_1003b4b8a;
                          }
                          uVar5 = (uint)param_1[1];
                          iVar3 = 0;
                        }
                        if ((uVar5 >> 0xc & 1) != 0) {
                          iVar3 = FUN_1001cb009(param_2,0xa96d766e,(long)param_1 + 0x3024);
                          if (iVar3 == -0x80) goto LAB_1003b4b9d;
                          if (iVar3 != 0) {
                            uVar7 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar2 == '\0') goto LAB_1003b4b9d;
                            puVar11 = &local_658;
                            local_658 = 0x8220202;
                            uStack_654 = 0x7a0a90;
                            uStack_650 = 1;
                            local_64c = 0x400;
                            local_64a = iVar3;
                            goto LAB_1003b4b8a;
                          }
                          uVar5 = (uint)param_1[1];
                          iVar3 = 0;
                        }
                        if ((uVar5 >> 0xd & 1) == 0) {
LAB_1003b3dff:
                          if ((uVar5 >> 0xe & 1) == 0) goto LAB_1003b4b9d;
                          if (*(char *)((long)param_1 + 0x2e23) != '\x01') {
                            iVar3 = FUN_1001cbec1(param_2,0x7368776d);
                            goto LAB_1003b4b9d;
                          }
                          iVar3 = FUN_1001cb5de(param_2,0x7368776d,(long)param_1 + 0x2e23,1);
                          if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1003b4b9d;
                          uVar7 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar2 == '\0') goto LAB_1003b4b9d;
                          puVar11 = &local_658;
                          local_658 = 0x8220202;
                          uStack_654 = 0x7a0a90;
                          uStack_650 = 1;
                          local_64c = 0x400;
                          local_64a = iVar3;
                        }
                        else {
                          iVar3 = FUN_1001cb5de(param_2,0xa96d7669,(long)param_1 + 0x3224,2);
                          if (iVar3 == -0x80) goto LAB_1003b4b9d;
                          if (iVar3 == 0) {
                            iVar3 = FUN_1001cb5de(param_2,0xa96d7663,(long)param_1 + 0x3226,2);
                            if (iVar3 == -0x80) goto LAB_1003b4b9d;
                            if (iVar3 == 0) {
                              uVar5 = (uint)param_1[1];
                              iVar3 = 0;
                              goto LAB_1003b3dff;
                            }
                            uVar7 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar2 == '\0') goto LAB_1003b4b9d;
                            puVar11 = &local_658;
                            local_658 = 0x8220202;
                            uStack_654 = 0x7a0a90;
                            uStack_650 = 1;
                            local_64c = 0x400;
                            local_64a = iVar3;
                          }
                          else {
                            uVar7 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar2 == '\0') goto LAB_1003b4b9d;
                            puVar11 = &local_658;
                            local_658 = 0x8220202;
                            uStack_654 = 0x7a0a90;
                            uStack_650 = 1;
                            local_64c = 0x400;
                            local_64a = iVar3;
                          }
                        }
                      }
                      else if (local_660 == 0) {
                        iVar3 = FUN_1001c9b1d(param_2,&local_660);
                        if (iVar3 == -0x80) goto LAB_1003b4b9d;
                        if (iVar3 == 0) {
                          iVar3 = FUN_1001c9f0c(local_660,0x2d2d2d2d,"com.apple.iTunes",0x10);
                          if (iVar3 == -0x80) goto LAB_1003b4b9d;
                          if (iVar3 == 0) {
                            iVar3 = FUN_1001ca240(local_660,"iTunEXTC",8);
                            if (iVar3 == -0x80) goto LAB_1003b4b9d;
                            if (iVar3 == 0) goto LAB_1003b45e9;
                            uVar7 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar2 == '\0') goto LAB_1003b4b9d;
                            puVar11 = &local_638;
                            local_638 = 0x8220202;
                            local_634 = "Assertion failure";
                            local_62c = 0x400;
                            local_62a = iVar3;
                          }
                          else {
                            uVar7 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar2 == '\0') goto LAB_1003b4b9d;
                            puVar11 = &local_638;
                            local_638 = 0x8220202;
                            local_634 = "Assertion failure";
                            local_62c = 0x400;
                            local_62a = iVar3;
                          }
                        }
                        else {
                          uVar7 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar2 == '\0') goto LAB_1003b4b9d;
                          puVar11 = &local_638;
                          local_638 = 0x8220202;
                          local_634 = "Assertion failure";
                          local_62c = 0x400;
                          local_62a = iVar3;
                        }
                      }
                      else {
LAB_1003b45e9:
                        uVar6 = FUN_1001e5b77(param_1 + 0x3fd,&local_638,0x400);
                        iVar3 = FUN_1001cacbc(local_660,1,1,&local_638,uVar6);
                        if (iVar3 == -0x80) goto LAB_1003b4b9d;
                        if (iVar3 == 0) goto LAB_1003b3d8b;
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_658;
                        local_658 = 0x8220202;
                        uStack_654 = 0x7a0a90;
                        uStack_650 = 1;
                        local_64c = 0x400;
                        local_64a = iVar3;
                      }
                    }
                    else {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                    }
                  }
                  else {
                    iVar3 = FUN_1001cb50f(param_2,0x726e7364,*(undefined4 *)((long)param_1 + 0xd0c))
                    ;
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 == 0) {
                      iVar3 = FUN_1001cb5de(param_2,0x726e6475,param_1 + 0x1a2,4);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 == 0) {
                        iVar3 = FUN_1001cb50f(param_2,0x72707364,
                                              *(undefined4 *)((long)param_1 + 0xd14));
                        if (iVar3 == -0x80) goto LAB_1003b4b9d;
                        if (iVar3 == 0) {
                          iVar3 = FUN_1001cb5de(param_2,0x72706475,param_1 + 0x1a3,4);
                          if (iVar3 == -0x80) goto LAB_1003b4b9d;
                          if (iVar3 == 0) {
                            uVar8 = *param_1;
                            iVar3 = 0;
                            goto LAB_1003b3b5a;
                          }
                          uVar7 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar2 == '\0') goto LAB_1003b4b9d;
                          puVar11 = &local_638;
                          local_638 = 0x8220202;
                          local_634 = "Assertion failure";
                          local_62c = 0x400;
                          local_62a = iVar3;
                        }
                        else {
                          uVar7 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar2 == '\0') goto LAB_1003b4b9d;
                          puVar11 = &local_638;
                          local_638 = 0x8220202;
                          local_634 = "Assertion failure";
                          local_62c = 0x400;
                          local_62a = iVar3;
                        }
                      }
                      else {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                      }
                    }
                    else {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                    }
                  }
                }
                else {
                  iVar3 = FUN_1001c955b(param_2,0x73664944,0,0,&local_660);
                  if (iVar3 == -0x80) goto LAB_1003b4b9d;
                  if (iVar3 == 0) {
                    if (local_660 == 0) {
                      iVar3 = FUN_1001c9b1d(param_2,&local_660);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 == 0) {
                        iVar3 = FUN_1001c9f0c(local_660,0x73664944,0,0);
                        if (iVar3 == -0x80) goto LAB_1003b4b9d;
                        if (iVar3 == 0) goto LAB_1003b319e;
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                      }
                      else {
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 == '\0') goto LAB_1003b4b9d;
                        puVar11 = &local_638;
                        local_638 = 0x8220202;
                        local_634 = "Assertion failure";
                        local_62c = 0x400;
                        local_62a = iVar3;
                      }
                    }
                    else {
LAB_1003b319e:
                      iVar3 = FUN_1003b7d04(local_660,*(undefined8 *)((long)param_1 + 0xcf4));
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 == 0) {
                        uVar8 = *param_1;
                        goto LAB_1003b2757;
                      }
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                    }
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 == '\0') goto LAB_1003b4b9d;
                    puVar11 = &local_638;
                    local_638 = 0x8220202;
                    local_634 = "Assertion failure";
                    local_62c = 0x400;
                    local_62a = iVar3;
                  }
                }
              }
              else {
                iVar3 = FUN_1001c955b(param_2,0x67654944,0,0,&local_660);
                if (iVar3 == -0x80) goto LAB_1003b4b9d;
                if (iVar3 == 0) {
                  if (local_660 == 0) {
                    iVar3 = FUN_1001c9b1d(param_2,&local_660);
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 == 0) {
                      iVar3 = FUN_1001c9f0c(local_660,0x67654944,0,0);
                      if (iVar3 == -0x80) goto LAB_1003b4b9d;
                      if (iVar3 == 0) goto LAB_1003b2fea;
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                    }
                    else {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003b4b9d;
                      puVar11 = &local_638;
                      local_638 = 0x8220202;
                      local_634 = "Assertion failure";
                      local_62c = 0x400;
                      local_62a = iVar3;
                    }
                  }
                  else {
LAB_1003b2fea:
                    iVar3 = FUN_1003b7d04(local_660,*(undefined8 *)((long)param_1 + 0xce4));
                    if (iVar3 == -0x80) goto LAB_1003b4b9d;
                    if (iVar3 == 0) {
                      uVar8 = *param_1;
                      goto LAB_1003b274d;
                    }
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 == '\0') goto LAB_1003b4b9d;
                    puVar11 = &local_638;
                    local_638 = 0x8220202;
                    local_634 = "Assertion failure";
                    local_62c = 0x400;
                    local_62a = iVar3;
                  }
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 == '\0') goto LAB_1003b4b9d;
                  puVar11 = &local_638;
                  local_638 = 0x8220202;
                  local_634 = "Assertion failure";
                  local_62c = 0x400;
                  local_62a = iVar3;
                }
              }
            }
          }
          else {
            iVar3 = FUN_1001c955b(param_2,0x636d4944,0,0,&local_660);
            if (iVar3 == -0x80) goto LAB_1003b4b9d;
            if (iVar3 == 0) {
              if (local_660 == 0) {
                iVar3 = FUN_1001c9b1d(param_2,&local_660);
                if (iVar3 == -0x80) goto LAB_1003b4b9d;
                if (iVar3 == 0) {
                  iVar3 = FUN_1001c9f0c(local_660,0x636d4944,0,0);
                  if (iVar3 == -0x80) goto LAB_1003b4b9d;
                  if (iVar3 == 0) goto LAB_1003b2d5d;
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 == '\0') goto LAB_1003b4b9d;
                  puVar11 = &local_638;
                  local_638 = 0x8220202;
                  local_634 = "Assertion failure";
                  local_62c = 0x400;
                  local_62a = iVar3;
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 == '\0') goto LAB_1003b4b9d;
                  puVar11 = &local_638;
                  local_638 = 0x8220202;
                  local_634 = "Assertion failure";
                  local_62c = 0x400;
                  local_62a = iVar3;
                }
              }
              else {
LAB_1003b2d5d:
                iVar3 = FUN_1003b7d04(local_660,*(undefined8 *)((long)param_1 + 0xcdc));
                if (iVar3 == -0x80) goto LAB_1003b4b9d;
                if (iVar3 == 0) {
                  uVar8 = *param_1;
                  goto LAB_1003b273a;
                }
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 == '\0') goto LAB_1003b4b9d;
                puVar11 = &local_638;
                local_638 = 0x8220202;
                local_634 = "Assertion failure";
                local_62c = 0x400;
                local_62a = iVar3;
              }
            }
            else {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 == '\0') goto LAB_1003b4b9d;
              puVar11 = &local_638;
              local_638 = 0x8220202;
              local_634 = "Assertion failure";
              local_62c = 0x400;
              local_62a = iVar3;
            }
          }
        }
        else {
          iVar3 = FUN_1001c955b(param_2,0x61744944,0,0,&local_660);
          if (iVar3 == -0x80) goto LAB_1003b4b9d;
          if (iVar3 == 0) {
            if (local_660 == 0) {
              iVar3 = FUN_1001c9b1d(param_2,&local_660);
              if (iVar3 == -0x80) goto LAB_1003b4b9d;
              if (iVar3 == 0) {
                iVar3 = FUN_1001c9f0c(local_660,0x61744944,0,0);
                if (iVar3 == -0x80) goto LAB_1003b4b9d;
                if (iVar3 == 0) goto LAB_1003b2ca7;
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 == '\0') goto LAB_1003b4b9d;
                puVar11 = &local_638;
                local_638 = 0x8220202;
                local_634 = "Assertion failure";
                local_62c = 0x400;
                local_62a = iVar3;
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 == '\0') goto LAB_1003b4b9d;
                puVar11 = &local_638;
                local_638 = 0x8220202;
                local_634 = "Assertion failure";
                local_62c = 0x400;
                local_62a = iVar3;
              }
            }
            else {
LAB_1003b2ca7:
              iVar3 = FUN_1003b7d04(local_660,*(undefined8 *)((long)param_1 + 0xcd4));
              if (iVar3 == -0x80) goto LAB_1003b4b9d;
              if (iVar3 == 0) {
                uVar8 = *param_1;
                goto LAB_1003b2730;
              }
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 == '\0') goto LAB_1003b4b9d;
              puVar11 = &local_638;
              local_638 = 0x8220202;
              local_634 = "Assertion failure";
              local_62c = 0x400;
              local_62a = iVar3;
            }
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') goto LAB_1003b4b9d;
            puVar11 = &local_638;
            local_638 = 0x8220202;
            local_634 = "Assertion failure";
            local_62c = 0x400;
            local_62a = iVar3;
          }
        }
      }
      else {
        local_658 = CONCAT31(local_658._1_3_,*(undefined1 *)((long)param_1 + 0x11));
        iVar3 = FUN_1001c955b(param_2,0x72746e67,0,0,&local_660);
        if (iVar3 == -0x80) goto LAB_1003b4b9d;
        if (iVar3 == 0) {
          if (local_660 == 0) {
            iVar3 = FUN_1001c9b1d(param_2,&local_660);
            if (iVar3 == -0x80) goto LAB_1003b4b9d;
            if (iVar3 == 0) {
              iVar3 = FUN_1001c9f0c(local_660,0x72746e67,0,0);
              if (iVar3 == -0x80) goto LAB_1003b4b9d;
              if (iVar3 == 0) goto LAB_1003b2ae5;
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 == '\0') goto LAB_1003b4b9d;
              puVar11 = &local_638;
              local_638 = 0x8220202;
              local_634 = "Assertion failure";
              local_62c = 0x400;
              local_62a = iVar3;
            }
            else {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 == '\0') goto LAB_1003b4b9d;
              puVar11 = &local_638;
              local_638 = 0x8220202;
              local_634 = "Assertion failure";
              local_62c = 0x400;
              local_62a = iVar3;
            }
          }
          else {
LAB_1003b2ae5:
            iVar3 = FUN_1001cacbc(local_660,1,0x15,&local_658,1);
            if (iVar3 == -0x80) goto LAB_1003b4b9d;
            if (iVar3 == 0) {
              uVar8 = *param_1;
              goto LAB_1003b2726;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') goto LAB_1003b4b9d;
            puVar11 = &local_638;
            local_638 = 0x8220202;
            local_634 = "Assertion failure";
            local_62c = 0x400;
            local_62a = iVar3;
          }
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 == '\0') goto LAB_1003b4b9d;
          puVar11 = &local_638;
          local_638 = 0x8220202;
          local_634 = "Assertion failure";
          local_62c = 0x400;
          local_62a = iVar3;
        }
      }
    }
    else {
      iVar3 = FUN_1001c955b(param_2,0x636e4944,0,0,&local_660);
      if (iVar3 == -0x80) goto LAB_1003b4b9d;
      if (iVar3 == 0) {
        if (local_660 == 0) {
          iVar3 = FUN_1001c9b1d(param_2,&local_660);
          if (iVar3 == -0x80) goto LAB_1003b4b9d;
          if (iVar3 == 0) {
            iVar3 = FUN_1001c9f0c(local_660,0x636e4944,0,0);
            if (iVar3 == -0x80) goto LAB_1003b4b9d;
            if (iVar3 == 0) goto LAB_1003b2a79;
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') goto LAB_1003b4b9d;
            puVar11 = &local_638;
            local_638 = 0x8220202;
            local_634 = "Assertion failure";
            local_62c = 0x400;
            local_62a = iVar3;
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') goto LAB_1003b4b9d;
            puVar11 = &local_638;
            local_638 = 0x8220202;
            local_634 = "Assertion failure";
            local_62c = 0x400;
            local_62a = iVar3;
          }
        }
        else {
LAB_1003b2a79:
          iVar3 = FUN_1003b7d04(local_660,*(undefined8 *)((long)param_1 + 0xccc));
          if (iVar3 == -0x80) goto LAB_1003b4b9d;
          if (iVar3 == 0) {
            uVar8 = *param_1;
            goto LAB_1003b271c;
          }
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 == '\0') goto LAB_1003b4b9d;
          puVar11 = &local_638;
          local_638 = 0x8220202;
          local_634 = "Assertion failure";
          local_62c = 0x400;
          local_62a = iVar3;
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') goto LAB_1003b4b9d;
        puVar11 = &local_638;
        local_638 = 0x8220202;
        local_634 = "Assertion failure";
        local_62c = 0x400;
        local_62a = iVar3;
      }
    }
  }
  else {
    local_238 = 0;
    iVar3 = FUN_1001cb009(param_2,0xa9646179);
    if (iVar3 == -0x80) goto LAB_1003b4b9d;
    if (iVar3 == 0) {
      if ((short)param_1[0x159] != 0) {
        iVar3 = FUN_1001cb009(param_2,0xa9646179,param_1 + 0x159);
        if (iVar3 == -0x80) goto LAB_1003b4b9d;
        if (iVar3 != 0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 == '\0') goto LAB_1003b4b9d;
          puVar11 = &local_638;
          local_638 = 0x8220202;
          local_634 = "Assertion failure";
          local_62c = 0x400;
          local_62a = iVar3;
          goto LAB_1003b4b8a;
        }
      }
      goto LAB_1003b25ff;
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 == '\0') goto LAB_1003b4b9d;
    puVar11 = &local_638;
    local_638 = 0x8220202;
    local_634 = "Assertion failure";
    local_62c = 0x400;
    local_62a = iVar3;
  }
LAB_1003b4b8a:
  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar11,0x12);
LAB_1003b4b9d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}


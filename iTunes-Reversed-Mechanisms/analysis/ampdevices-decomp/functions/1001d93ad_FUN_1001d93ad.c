// name: FUN_1001d93ad
// address: 1001d93ad

void FUN_1001d93ad(long param_1)

{
  sockaddr *psVar1;
  undefined2 uVar2;
  int *piVar3;
  void *pvVar4;
  char cVar5;
  in_addr_t iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined2 *puVar12;
  hostent *phVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  addrinfo *paVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  ulong uVar21;
  bool bVar22;
  addrinfo *local_188;
  void *local_180;
  int local_174;
  undefined8 local_170;
  undefined1 local_168 [12];
  char acStack_15c [244];
  addrinfo local_68;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      FUN_1006b719f(uVar10);
    }
    FUN_1001782e9(0,0);
    goto LAB_1001d9ece;
  }
  uVar10 = FUN_1001edfdf();
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  FUN_1001e9de0(param_1);
  piVar3 = *(int **)(param_1 + 0x50);
  local_170 = param_1;
  if (piVar3 != (int *)0x0) {
    piVar3[0xd] = -1;
    if (*(char *)(param_1 + 0x12a) == '\0') goto LAB_1001d963a;
    pcVar20 = (char *)(param_1 + 0x12a);
    if (*(char *)((long)piVar3 + 0x31) == '\x1e') {
      local_188 = (addrinfo *)0x0;
      sVar11 = _strlen(pcVar20);
      if (0xff < sVar11) goto LAB_1001d9d80;
      FUN_1001c62d9(&local_68,0x30);
      lVar14 = local_170;
      local_68.ai_family = (int)*(byte *)((long)piVar3 + 0x31);
      local_68.ai_socktype = 1;
      if (*piVar3 != 1) {
        local_68.ai_flags = local_68.ai_flags | 1;
        local_68.ai_socktype = 2;
      }
      if ((*(byte *)((long)piVar3 + 0x31) == 0x1e) && (*pcVar20 == '[')) {
        pcVar20 = (char *)(local_170 + 299);
        sVar11 = sVar11 - 2;
      }
      _strncpy(local_168,pcVar20,sVar11);
      local_168[sVar11] = 0;
      puVar12 = (undefined2 *)((long)piVar3 + 0x32);
      if (*(char *)((long)piVar3 + 0x31) == '\x1e') {
        puVar12 = (undefined2 *)((long)piVar3 + 0x5e);
      }
      uVar2 = *puVar12;
      FUN_1001e9eb9(lVar14);
      iVar7 = _getaddrinfo(local_168,(char *)0x0,&local_68,&local_188);
      FUN_1001e9de0(lVar14);
      if (*(long *)(lVar14 + 0x50) == 0) goto LAB_1001d9db9;
      if (iVar7 == 0) {
        paVar17 = local_188;
        if (*(byte *)((long)piVar3 + 0x31) != 0) {
          for (; paVar17 != (addrinfo *)0x0; paVar17 = paVar17->ai_next) {
            if (paVar17->ai_family == (uint)*(byte *)((long)piVar3 + 0x31)) goto LAB_1001d9cf7;
          }
        }
        paVar17 = (addrinfo *)0x0;
LAB_1001d9cf7:
        if (paVar17 == (addrinfo *)0x0) {
          paVar17 = local_188;
        }
        if (paVar17 != (addrinfo *)0x0) {
          if (paVar17->ai_family == 0x1e) {
            if (paVar17->ai_addrlen != 0x1c) {
LAB_1001d9d80:
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                FUN_1006b6e65(uVar10);
              }
              FUN_1001782e9(0,0);
              *(undefined8 *)(*(long *)(local_170 + 0x50) + 0x18) = 0;
              goto LAB_1001d9db9;
            }
            FUN_1001c631b(paVar17->ai_addr,piVar3 + 0x17,0x1c);
            *(undefined2 *)((long)piVar3 + 0x5e) = uVar2;
            if (((char)piVar3[0x19] != -2) ||
               (!SBORROW1('\0',*(byte *)((long)piVar3 + 0x65) & 0xc0))) {
              piVar3[0x1d] = 0;
            }
          }
          else {
            if (paVar17->ai_addrlen != 0x10) goto LAB_1001d9d80;
            FUN_1001c631b(paVar17->ai_addr,piVar3 + 0xc,0x10);
            *(undefined2 *)((long)piVar3 + 0x32) = uVar2;
          }
          _freeaddrinfo(local_188);
          lVar14 = local_170;
          goto LAB_1001d94f8;
        }
        _freeaddrinfo(local_188);
      }
      else {
        ___error();
      }
LAB_1001d963a:
      piVar3[0x1f] = -0xc4e;
      lVar18 = local_170;
    }
    else {
      iVar6 = _inet_addr(pcVar20);
      if (iVar6 == 0xffffffff) {
        FUN_1001e9eb9(param_1);
        phVar13 = _gethostbyname(pcVar20);
        FUN_1001e9de0(param_1);
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_1001d9db9;
        if (phVar13 == (hostent *)0x0) goto LAB_1001d963a;
        piVar3[0xd] = *(int *)*phVar13->h_addr_list;
        lVar14 = local_170;
      }
      else {
        piVar3[0xd] = iVar6;
        lVar14 = param_1;
      }
LAB_1001d94f8:
      psVar1 = (sockaddr *)(piVar3 + 8);
      if (*piVar3 == 1) {
        local_168._0_4_ = piVar3[0xc];
        local_168._4_8_ = *(undefined8 *)(piVar3 + 0xd);
        acStack_15c._0_2_ = (undefined2)piVar3[0xf];
        acStack_15c._2_2_ = (undefined2)((uint)piVar3[0xf] >> 0x10);
        iVar7 = *(int *)(lVar14 + 0x100);
        FUN_1001e9eb9(lVar14);
        if (*(char *)((long)piVar3 + 0x31) == '\x1e') {
          piVar16 = piVar3 + 0x17;
          uVar10 = 0x1c;
        }
        else {
          piVar16 = (int *)local_168;
          uVar10 = 0x10;
        }
        iVar8 = _connect(iVar7,piVar16,uVar10);
        if (iVar8 == 0) {
          local_68.ai_flags = 1;
          iVar9 = _setsockopt(iVar7,6,1,&local_68,4);
          if (iVar9 != 0) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              FUN_1006b6edb(uVar10);
            }
            FUN_1001782e9(0,0);
            lVar14 = local_170;
          }
        }
      }
      else {
        local_168[0] = psVar1->sa_len;
        local_168[1] = psVar1->sa_family;
        local_168[2] = psVar1->sa_data[0];
        local_168[3] = psVar1->sa_data[1];
        local_168._4_8_ = *(undefined8 *)(piVar3 + 9);
        acStack_15c._0_2_ = (undefined2)piVar3[0xb];
        acStack_15c._2_2_ = (undefined2)((uint)piVar3[0xb] >> 0x10);
        iVar7 = *(int *)(lVar14 + 0x100);
        FUN_1001e9eb9(lVar14);
        iVar8 = _bind(iVar7,(sockaddr *)local_168,0x10);
      }
      FUN_1001e9de0(lVar14);
      lVar18 = local_170;
      if (*(long *)(lVar14 + 0x50) == 0) goto LAB_1001d9db9;
      if (iVar8 == -1) {
        piVar16 = ___error();
        iVar7 = FUN_1001eb020(*piVar16);
        piVar3[0x1f] = iVar7;
        lVar18 = local_170;
      }
      else {
        if (*(char *)((long)piVar3 + 0x21) == '\x1e') {
          local_168._0_4_ = 0x1c;
          iVar7 = _getsockname(iVar7,(sockaddr *)(piVar3 + 0x10),(socklen_t *)local_168);
          if ((iVar7 == -1) || (local_168._0_4_ != 0x1c)) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              FUN_1006b6fc7(uVar10);
            }
LAB_1001d9ca6:
            FUN_1001782e9(0,0);
            lVar18 = local_170;
          }
        }
        else {
          local_168._0_4_ = 0x10;
          iVar7 = _getsockname(iVar7,psVar1,(socklen_t *)local_168);
          if ((iVar7 == -1) || (local_168._0_4_ != 0x10)) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              FUN_1006b6f51(uVar10);
            }
            goto LAB_1001d9ca6;
          }
        }
        piVar3[0x1f] = 0;
        *(undefined1 *)(piVar3 + 0x1e) = 1;
        *(undefined1 *)(lVar18 + 0x129) = 1;
      }
    }
    do {
      lVar14 = local_170;
      FUN_1001e9eb9(local_170);
      FUN_1001e86ff(lVar18 + 0x58);
      FUN_1001e9de0(lVar14);
      lVar14 = *(long *)(lVar14 + 0x50);
      while( true ) {
        if (lVar14 == 0) goto LAB_1001d9db9;
        lVar14 = FUN_1001ead5c(lVar18 + 0xe8);
        if (lVar14 == 0) break;
        if (*(int *)(lVar14 + 8) == 0x77726974) {
          piVar3 = *(int **)(local_170 + 0x50);
          if (*piVar3 == 2) {
            local_68.ai_flags = piVar3[0xc];
            local_68.ai_family = piVar3[0xd];
            local_68.ai_socktype = piVar3[0xe];
            local_68.ai_protocol = piVar3[0xf];
          }
          iVar7 = *(int *)(local_170 + 0x100);
          pvVar4 = *(void **)(lVar14 + 0x20);
          uVar21 = *(ulong *)(lVar14 + 0x28);
          FUN_1001e9eb9(local_170);
          if (*piVar3 == 2) {
            uVar15 = _sendto(iVar7,pvVar4,uVar21,0,(sockaddr *)&local_68,0x10);
          }
          else {
            uVar15 = _send(iVar7,pvVar4,uVar21,0);
          }
          lVar19 = local_170;
          FUN_1001e9de0(local_170);
          if (*(long *)(lVar19 + 0x50) == 0) goto LAB_1001d9db9;
          if ((long)uVar15 < 1) {
            uVar10 = 0;
            if (uVar15 == 0) {
              uVar10 = 0xffffffd9;
            }
            if (uVar15 == 0xffffffffffffffff) {
              ___error();
              uVar10 = 0xffffffd9;
            }
          }
          else {
            if (uVar21 < uVar15) {
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_168._0_4_ = 0x8220202;
                local_168._4_8_ = "Assertion failure";
                builtin_strncpy(acStack_15c,"\"\b׬z",6);
                acStack_15c[6] = '\x01';
                acStack_15c[7] = '\0';
                acStack_15c[8] = '\0';
                acStack_15c[9] = '\0';
                __os_log_error_impl(0x100000000,uVar10,0x10);
              }
              FUN_1001782e9(0,0);
              lVar19 = local_170;
            }
            *(ulong *)(piVar3 + 4) = *(long *)(piVar3 + 4) + uVar15;
            *(ulong *)(lVar14 + 0x30) = uVar15;
            uVar10 = 0;
          }
LAB_1001d9a12:
          FUN_1001db722(lVar19,lVar14,uVar10);
        }
        else {
          if (*(int *)(lVar14 + 8) == 0x72656164) {
            uVar21 = *(ulong *)(lVar14 + 0x28);
            if (uVar21 != 0) {
              piVar3 = *(int **)(local_170 + 0x50);
              local_174 = *(int *)(local_170 + 0x100);
              local_180 = *(void **)(lVar14 + 0x20);
              do {
                lVar19 = local_170;
                FUN_1001e9eb9(local_170);
                if (*piVar3 == 2) {
                  uVar15 = _recvfrom(local_174,local_180,uVar21,0,(sockaddr *)0x0,(socklen_t *)0x0);
                }
                else {
                  uVar15 = _recv(local_174,local_180,uVar21,0);
                }
                FUN_1001e9de0(lVar19);
                if (*(long *)(lVar19 + 0x50) == 0) goto LAB_1001d9db9;
                if (0 < (long)uVar15) {
                  bVar22 = uVar21 < uVar15;
                  uVar21 = uVar21 - uVar15;
                  if (bVar22) {
                    uVar10 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar5 != '\0') {
                      local_168._0_4_ = 0x8220202;
                      local_168._4_8_ = "Assertion failure";
                      acStack_15c[0] = '\"';
                      acStack_15c[1] = '\b';
                      acStack_15c[2] = -0x6b;
                      acStack_15c[3] = -0x54;
                      acStack_15c[4] = 'z';
                      acStack_15c[5] = '\0';
                      acStack_15c[6] = '\x01';
                      acStack_15c[7] = '\0';
                      acStack_15c[8] = '\0';
                      acStack_15c[9] = '\0';
                      __os_log_error_impl(0x100000000,uVar10,0x10);
                    }
                    FUN_1001782e9(0,0);
                  }
                  *(ulong *)(piVar3 + 2) = *(long *)(piVar3 + 2) + uVar15;
                  *(long *)(lVar14 + 0x30) = *(long *)(lVar14 + 0x30) + uVar15;
                  local_180 = (void *)((long)local_180 + uVar15);
                }
                uVar10 = 0xffffffd9;
                lVar19 = local_170;
                if (uVar15 == 0) goto LAB_1001d9a12;
                if (uVar15 == 0xffffffffffffffff) {
                  ___error();
                  lVar19 = local_170;
                  goto LAB_1001d9a12;
                }
                if ((*(byte *)(lVar14 + 0xc) & 1) != 0) break;
                if (*piVar3 != 1) {
                  uVar10 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar5 != '\0') {
                    local_168._0_4_ = 0x8220202;
                    local_168._4_8_ = "Assertion failure";
                    acStack_15c[0] = '\"';
                    acStack_15c[1] = '\b';
                    acStack_15c[2] = -0x53;
                    acStack_15c[3] = -0x54;
                    acStack_15c[4] = 'z';
                    acStack_15c[5] = '\0';
                    acStack_15c[6] = '\x01';
                    acStack_15c[7] = '\0';
                    acStack_15c[8] = '\0';
                    acStack_15c[9] = '\0';
                    __os_log_error_impl(0x100000000,uVar10,0x10);
                  }
                  FUN_1001782e9(0,0);
                }
              } while (uVar21 != 0);
            }
            uVar10 = 0;
            lVar19 = local_170;
            goto LAB_1001d9a12;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_168._0_4_ = 0x8220202;
            local_168._4_8_ = "Assertion failure";
            acStack_15c[0] = '\"';
            acStack_15c[1] = '\b';
            acStack_15c[2] = -0x44;
            acStack_15c[3] = '\x16';
            acStack_15c[4] = 'z';
            acStack_15c[5] = '\0';
            acStack_15c[6] = '\x01';
            acStack_15c[7] = '\0';
            acStack_15c[8] = '\0';
            acStack_15c[9] = '\0';
            __os_log_error_impl(0x100000000,uVar10,0x10);
          }
          FUN_1001782e9(0,0);
          iVar7 = FUN_1001eacad(lVar14,lVar18 + 0xe8);
          lVar19 = local_170;
          if (iVar7 != 0) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_168._0_4_ = 0x8220202;
              local_168._4_8_ = "Assertion failure";
              acStack_15c[0] = '\"';
              acStack_15c[1] = '\b';
              acStack_15c[2] = -0x14;
              acStack_15c[3] = -0x55;
              acStack_15c[4] = 'z';
              acStack_15c[5] = '\0';
              acStack_15c[6] = '\x01';
              acStack_15c[7] = '\0';
              acStack_15c[8] = '\0';
              acStack_15c[9] = '\0';
              __os_log_error_impl(0x100000000,uVar10,0x10);
            }
            FUN_1001782e9(0,0);
            lVar19 = local_170;
          }
        }
        lVar14 = *(long *)(lVar19 + 0x50);
        if (lVar14 == 0) goto LAB_1001d9db9;
      }
    } while (*(long *)(local_170 + 0x50) != 0);
  }
LAB_1001d9db9:
  lVar14 = local_170;
  FUN_1001e9eb9(local_170);
  FUN_1001e944c(lVar14 + 0x108);
  FUN_1001e9587(lVar14 + 0x108);
  FUN_1001e9d75(lVar14);
  FUN_1001e8470(lVar14 + 0x58);
  lVar18 = FUN_1001ead5c(lVar14 + 0xe8);
  if (lVar18 != 0) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      FUN_1006b703d(uVar10);
    }
    FUN_1001782e9(0,0);
    lVar14 = local_170;
  }
  if (*(int *)(lVar14 + 0x100) != -1) {
    if (((*(char *)(lVar14 + 0x129) != '\0') && (*(char *)(lVar14 + 0x128) != '\0')) &&
       (iVar7 = _shutdown(*(int *)(lVar14 + 0x100),2), iVar7 != 0)) {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        FUN_1006b70b3(uVar10);
      }
      FUN_1001782e9(0,0);
      lVar14 = local_170;
    }
    iVar7 = _close(*(int *)(lVar14 + 0x100));
    if (iVar7 != 0) {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        FUN_1006b7129(uVar10);
      }
      FUN_1001782e9(0,0);
      lVar14 = local_170;
    }
  }
  FUN_1001c64c1(lVar14);
LAB_1001d9ece:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


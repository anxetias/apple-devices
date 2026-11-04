// name: FUN_1001d8ee4
// address: 1001d8ee4

int FUN_1001d8ee4(int *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined1 uVar9;
  undefined4 local_1cc;
  int *local_1c8;
  long local_1c0;
  long local_1b8;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  uint local_198;
  ushort local_194;
  char local_144;
  int local_140;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 1;
  lVar6 = FUN_1001c6429(0x530);
  *(long *)(param_1 + 6) = lVar6;
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      FUN_1006b6def(uVar7);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    goto LAB_1001d935c;
  }
  *(int **)(lVar6 + 0x50) = param_1;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  local_1c8 = param_2;
  iVar4 = FUN_1001e9c3e(lVar6);
  iVar5 = -0x32;
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      local_1c0 = lVar6 + 0x58;
      iVar4 = FUN_1001e845f();
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          local_1b8 = lVar6 + 0x108;
          iVar4 = FUN_1001e8dd6(local_1b8,0,0);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              FUN_1001eaba7(lVar6 + 0xe8,0);
              piVar2 = local_1c8;
              *(undefined4 *)(lVar6 + 0x100) = 0xffffffff;
              *(undefined1 *)(lVar6 + 0x129) = 0;
              if (((param_3 & 1) != 0) && (*local_1c8 == 1)) {
                *(undefined1 *)(lVar6 + 0x128) = 1;
              }
              *(undefined1 *)((long)local_1c8 + (ulong)(uint)local_1c8[4] + 0x14) = 0;
              FUN_1001a3e13(local_1c8 + 5,local_1b0);
              iVar4 = *piVar2;
              if (iVar4 == 2) {
                iVar5 = _socket(2,2,0);
                *(int *)(lVar6 + 0x100) = iVar5;
                if (iVar5 == -1) {
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    FUN_1006b6a71(uVar7);
                  }
LAB_1001d9184:
                  FUN_1001782e9(0,0);
                  piVar8 = ___error();
                  iVar5 = FUN_1001eb020(*piVar8);
                  if (iVar5 == -0x80) goto LAB_1001d932c;
                  if (iVar5 != 0) goto LAB_1001d9294;
                }
LAB_1001d91ae:
                if (*piVar2 == 1) {
                  local_1cc = 1;
                  iVar5 = _setsockopt(*(int *)(lVar6 + 0x100),0xffff,0x1022,&local_1cc,4);
                  if (iVar5 != 0) {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      FUN_1006b6b5d(uVar7);
                    }
                    FUN_1001782e9(0,0);
                  }
                }
                FUN_1001c631b(local_1a0,lVar6 + 0x12a,local_198);
                *(undefined1 *)(lVar6 + 0x12a + (ulong)local_198) = 0;
                if (local_194 == 0) {
                  local_194 = 0x50;
                }
                if (local_144 == '\0') {
                  param_1[8] = 0x210;
                  param_1[9] = 0;
                  *(undefined1 *)(param_1 + 0xc) = 0x10;
                  *(ushort *)((long)param_1 + 0x32) = local_194 << 8 | local_194 >> 8;
                  param_1[0xd] = -1;
                  uVar9 = 2;
                }
                else {
                  uVar9 = 0x1e;
                  *(undefined1 *)((long)param_1 + 0x21) = 0x1e;
                  param_1[0x10] = 0x1e1c;
                  iVar5 = *(int *)(PTR__in6addr_any_10082ce38 + 4);
                  iVar4 = *(int *)(PTR__in6addr_any_10082ce38 + 8);
                  iVar1 = *(int *)(PTR__in6addr_any_10082ce38 + 0xc);
                  param_1[0x12] = *(int *)PTR__in6addr_any_10082ce38;
                  param_1[0x13] = iVar5;
                  param_1[0x14] = iVar4;
                  param_1[0x15] = iVar1;
                  *(undefined1 *)((long)param_1 + 0x5d) = 0x1e;
                  *(ushort *)((long)param_1 + 0x5e) = local_194 << 8 | local_194 >> 8;
                  param_1[0x1d] = local_140;
                  *(undefined1 *)(param_1 + 0x17) = 0x1c;
                }
                *(undefined1 *)((long)param_1 + 0x31) = uVar9;
                iVar5 = FUN_1001ee6ff(FUN_1001d93ad,lVar6,1,0,0,"SocketIOTask");
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) goto LAB_1001d935c;
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    FUN_1006b6bd3(iVar5,uVar7);
                  }
                }
                _close(*(int *)(lVar6 + 0x100));
              }
              else {
                if (iVar4 == 1) {
                  iVar5 = 0x1e;
                  if (local_144 == '\0') {
                    iVar5 = 2;
                  }
                  iVar5 = _socket(iVar5,1,0);
                  *(int *)(lVar6 + 0x100) = iVar5;
                  if (iVar5 == -1) {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      FUN_1006b6ae7(uVar7);
                    }
                    goto LAB_1001d9184;
                  }
                  goto LAB_1001d91ae;
                }
                *(undefined4 *)(lVar6 + 0x100) = 0xffffffff;
LAB_1001d9294:
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  FUN_1006b6c3f(iVar5,uVar7);
                }
              }
LAB_1001d932c:
              FUN_1001e9587(local_1b8);
            }
            else {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                FUN_1006b6cab(iVar4,uVar7);
              }
            }
          }
          FUN_1001e8470(local_1c0);
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            FUN_1006b6d17(iVar4,uVar7);
          }
        }
      }
      FUN_1001e9d75(lVar6);
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        FUN_1006b6d83(iVar4,uVar7);
      }
    }
  }
  FUN_1001c64c1(lVar6);
  param_1[6] = 0;
  param_1[7] = 0;
LAB_1001d935c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


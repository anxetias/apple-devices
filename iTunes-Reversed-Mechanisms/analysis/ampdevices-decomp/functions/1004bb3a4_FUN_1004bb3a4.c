// name: FUN_1004bb3a4
// address: 1004bb3a4

int FUN_1004bb3a4(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = *(int *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0xb8) < param_2) {
    param_2 = *(int *)(param_1 + 0xb8);
  }
  iVar6 = 0;
  if ((param_2 == iVar5) ||
     (*(int *)(param_1 + 0xbc) = param_2, iVar6 = 0, *(char *)(param_1 + 0x145) != '\0'))
  goto LAB_1004bb87b;
  FUN_1001e9de0(param_1 + 200);
  if (iVar5 < param_2) {
    iVar5 = FUN_1001e9de0(param_1 + 0x18);
    iVar6 = 0;
    if (iVar5 == 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x68);
      cVar4 = FUN_1004aa626(puVar11);
      iVar6 = 0;
      uVar10 = 0;
      if (cVar4 != '\0') {
        uVar10 = 0;
        do {
          if ((*(int *)(puVar11 + 0x23) - 1U < 3) &&
             (uVar10 = uVar10 + 1, *(uint *)(param_1 + 0xbc) <= uVar10)) break;
          puVar11 = (undefined8 *)*puVar11;
          cVar4 = FUN_1004aa626(puVar11);
        } while (cVar4 != '\0');
      }
      FUN_1001e9eb9(param_1 + 0x18);
      bVar14 = uVar10 < *(uint *)(param_1 + 0x140);
      uVar10 = uVar10 - *(uint *)(param_1 + 0x140);
      bVar15 = uVar10 != 0;
      if (bVar14) {
        uVar10 = 0;
      }
      if (!bVar14 && bVar15) {
        uVar13 = 0;
        do {
          iVar6 = FUN_1004b132d(param_1,0);
          if (iVar6 != 0) {
            if (iVar6 != -0x80) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            break;
          }
          if (*(uint *)(param_1 + 0xbc) < *(uint *)(param_1 + 0x140)) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "inQueue->numTasksInFlight <= inQueue->currentMaxDownloadsInFlight";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            iVar6 = 0;
            FUN_1001782e9(0,0);
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar10);
      }
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xbc);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x140) - iVar5) {
      iVar7 = FUN_1001e9de0(param_1 + 0x18);
      if (iVar7 == 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x68);
        cVar4 = FUN_1004aa626(puVar11);
        if (cVar4 == '\0') {
LAB_1004bb5fd:
          uVar10 = 0;
          iVar6 = 0;
        }
        else {
          uVar10 = 0;
          do {
            if (uVar10 < *(uint *)((long)puVar11 + 0x11c)) {
              uVar10 = *(uint *)((long)puVar11 + 0x11c);
            }
            puVar11 = (undefined8 *)*puVar11;
            cVar4 = FUN_1004aa626(puVar11);
          } while (cVar4 != '\0');
          if (uVar10 == 0) goto LAB_1004bb5fd;
          iVar8 = 0;
          iVar7 = 0;
          if (0 < iVar5) {
            iVar7 = iVar5;
          }
          do {
            iVar6 = iVar7;
            if (iVar8 == iVar7) break;
            puVar11 = *(undefined8 **)(param_1 + 0x68);
            cVar4 = FUN_1004aa626(puVar11);
            iVar6 = iVar8;
            if (cVar4 == '\0') break;
            uVar13 = 0;
            puVar12 = (undefined8 *)0x0;
            do {
              if ((puVar11 != (undefined8 *)0x0) &&
                 (uVar1 = *(uint *)((long)puVar11 + 0x11c),
                 (uVar1 <= uVar10 && uVar13 < uVar1) &&
                 (*(uint *)(puVar11 + 0x23) & 0xfffffffe) == 2)) {
                puVar12 = puVar11;
                uVar13 = uVar1;
              }
              puVar11 = (undefined8 *)*puVar11;
              cVar4 = FUN_1004aa626(puVar11);
            } while (cVar4 != '\0');
            if (puVar12 == (undefined8 *)0x0) break;
            iVar8 = iVar8 + 1;
            uVar10 = uVar13 - 1;
            if (uVar10 == 0) {
              uVar10 = 0;
              iVar6 = iVar8;
              break;
            }
            iVar6 = iVar5;
          } while (iVar8 != iVar5);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x68);
        cVar4 = FUN_1004aa626(puVar11);
        while (cVar4 != '\0') {
          iVar7 = iVar6;
          if ((((puVar11 != (undefined8 *)0x0) && ((*(uint *)(puVar11 + 0x23) & 0xfffffffe) == 2))
              && (*(uint *)((long)puVar11 + 0x11c) <= uVar10)) &&
             ((iVar7 = iVar6 + 1, iVar5 <= iVar6 &&
              (piVar2 = (int *)puVar11[6], piVar2 != (int *)0x0)))) {
            if (*piVar2 != 0x64777469) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure (expected to be true)";
                local_4c = 0x822;
                local_4a = "(inWorkTaskInfo)->magic == \'dwti\'";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar4 = FUN_1001782e9(0,1);
              if (cVar4 == '\0') {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = 
                  "( ((inWorkTaskInfo) != __null) && (((inWorkTaskInfo)->magic == \'dwti\') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"(inWorkTaskInfo)->magic == \'dwti\'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/iTunes/Application/DownloadManager.cpp\", 8461, true)) )"
                  ;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_1004bb77f;
              }
            }
            lVar3 = *(long *)(piVar2 + 0x1e);
            if (lVar3 == 0) {
              *(undefined1 *)(piVar2 + 0x1c) = 1;
            }
            else if (*(char *)(lVar3 + 0x69) != '\0') {
              *(undefined1 *)(piVar2 + 0x1c) = 1;
              *(undefined1 *)(lVar3 + 0x1cb) = 1;
              FUN_1004ac2b6(lVar3,0,0xffffff80,1);
            }
          }
LAB_1004bb77f:
          puVar11 = (undefined8 *)*puVar11;
          cVar4 = FUN_1004aa626(puVar11);
          iVar6 = iVar7;
        }
        FUN_1001e9eb9(param_1 + 0x18);
        iVar6 = 0;
      }
    }
  }
  FUN_1001e9eb9(param_1 + 200);
LAB_1004bb87b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}


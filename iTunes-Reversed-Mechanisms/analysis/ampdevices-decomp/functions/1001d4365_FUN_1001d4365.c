// name: FUN_1001d4365
// address: 1001d4365

void FUN_1001d4365(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = param_1 + 0x998;
  lVar2 = param_1 + 0x9b8;
  plVar3 = (long *)(param_1 + 0x980);
  do {
    iVar9 = FUN_1001e9e65(param_1 + 8);
    if (iVar9 != 0) break;
    lVar10 = FUN_1001eada7(lVar1);
    while (lVar10 != 0) {
      iVar9 = *(int *)(lVar10 + 0x10);
      if (iVar9 < 0x436f6d70) {
        if (iVar9 == 0x43534650) {
          if (lVar10 != *(long *)(param_1 + 0x9b0)) {
            uVar11 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar11,0x10);
            if (cVar8 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "pb == stream->pendingIO";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          iVar9 = 0;
          if (*(int *)(param_1 + 0x98) == 1) {
            iVar9 = (int)*(short *)(lVar10 + 0x7c);
          }
LAB_1001d46c0:
          *(int *)(lVar10 + 0x14) = iVar9;
          if (*(code **)(lVar10 + 0x50) != (code *)0x0) {
            (**(code **)(lVar10 + 0x50))(lVar10);
          }
          goto LAB_1001d482e;
        }
        if (iVar9 == 0x43577274) {
          if (lVar10 != *(long *)(param_1 + 0x9b0)) {
            uVar11 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar11,0x10);
            if (cVar8 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "pb == stream->pendingIO";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          iVar5 = *(int *)(param_1 + 0x98);
          if ((iVar5 == 4) || (iVar5 == 2)) {
            iVar9 = *(int *)(lVar10 + 0x98);
            uVar14 = *(ulong *)(lVar10 + 0x90);
            *(long *)(lVar10 + 0xf8) = *(long *)(lVar10 + 0xf8) - uVar14;
          }
          else {
            iVar9 = 0;
            if (iVar5 != 1) goto LAB_1001d46af;
            sVar4 = *(short *)(lVar10 + 0x7c);
            if ((sVar4 != 0) && (sVar4 != -0x27)) {
              *(undefined4 *)(lVar10 + 0xa2) = 0;
            }
            iVar9 = (int)sVar4;
            uVar14 = (ulong)*(uint *)(lVar10 + 0xa2);
          }
          *(long *)(lVar10 + 0x100) = *(long *)(lVar10 + 0x100) + uVar14;
          *(long *)(param_1 + 0x958) = *(long *)(param_1 + 0x958) + uVar14;
          goto LAB_1001d46af;
        }
        if (iVar9 == 0x436c6f73) goto LAB_1001d44b1;
LAB_1001d45be:
        if (*(char *)(param_1 + 0x9d0) != '\0') {
          *(undefined4 *)(lVar10 + 0x14) = 0xffffffe5;
          if (*(code **)(lVar10 + 0x50) != (code *)0x0) {
            (**(code **)(lVar10 + 0x50))(lVar10);
          }
          goto LAB_1001d4841;
        }
LAB_1001d475d:
        FUN_1001eac02(lVar10,lVar2);
      }
      else {
        if (iVar9 != 0x52436d70) {
          if (iVar9 == 0x4b696c6c) {
LAB_1001d44b1:
            *(undefined1 *)(param_1 + 0x9d0) = 1;
            if (iVar9 == 0x436c6f73) {
              if (*(int *)(param_1 + 0x98) == 4) {
                *(undefined1 *)(param_1 + 0x93a) = 1;
              }
              else if (*(int *)(param_1 + 0x98) == 2) {
                *(undefined1 *)(param_1 + 0x539) = 1;
              }
            }
            puVar12 = (undefined8 *)FUN_1001ead5c(lVar2);
            if (puVar12 != (undefined8 *)0x0) {
              if (puVar12 != *(undefined8 **)(param_1 + 0x9b0)) goto LAB_1001d4704;
              puVar6 = (undefined8 *)*puVar12;
              while (puVar12 = puVar6, puVar12 != (undefined8 *)0x0) {
LAB_1001d4704:
                puVar6 = (undefined8 *)*puVar12;
                FUN_1001eacad(puVar12,lVar2);
                *(undefined4 *)((long)puVar12 + 0x14) = 0xffffffe5;
                if ((code *)puVar12[10] != (code *)0x0) {
                  (*(code *)puVar12[10])(puVar12);
                }
              }
            }
            if (*(int *)(param_1 + 0x98) == 4) {
              FUN_1001da732(param_1 + 0x4c0);
            }
            else if (*(int *)(param_1 + 0x98) == 2) {
              FUN_1001d9f40(param_1 + 0x4c0);
            }
            goto LAB_1001d475d;
          }
          if (iVar9 != 0x436f6d70) goto LAB_1001d45be;
          if (lVar10 != *(long *)(param_1 + 0x9b0)) {
            uVar11 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar11,0x10);
            if (cVar8 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "pb == stream->pendingIO";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          iVar9 = *(int *)(param_1 + 0x98);
          if ((iVar9 == 4) || (iVar9 == 2)) {
            iVar9 = *(int *)(lVar10 + 0x98);
            uVar14 = *(ulong *)(lVar10 + 0x90);
            *(long *)(lVar10 + 0xf8) = *(long *)(lVar10 + 0xf8) - uVar14;
LAB_1001d466a:
            *(long *)(lVar10 + 0x100) = *(long *)(lVar10 + 0x100) + uVar14;
            *(long *)(param_1 + 0x958) = *(long *)(param_1 + 0x958) + uVar14;
            if (iVar9 != 0) goto LAB_1001d46af;
          }
          else if (iVar9 == 1) {
            sVar4 = *(short *)(lVar10 + 0x7c);
            if ((sVar4 != 0) && (sVar4 != -0x27)) {
              *(undefined4 *)(lVar10 + 0xa2) = 0;
            }
            iVar9 = (int)sVar4;
            uVar14 = (ulong)*(uint *)(lVar10 + 0xa2);
            goto LAB_1001d466a;
          }
          *(undefined1 *)(param_1 + 0x952) = *(undefined1 *)(param_1 + 0x951);
          iVar9 = 0;
LAB_1001d46af:
          **(undefined8 **)(lVar10 + 0x110) = *(undefined8 *)(lVar10 + 0x100);
          goto LAB_1001d46c0;
        }
        lVar10 = *(long *)(lVar10 + 0x58);
        if (lVar10 != *(long *)(param_1 + 0x9b0)) {
          uVar11 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar11,0x10);
          if (cVar8 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "buffer == stream->pendingIO";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (lVar10 == 0) goto LAB_1001d4841;
        iVar9 = *(int *)(param_1 + 0x98);
        if ((iVar9 == 4) || (iVar9 == 2)) {
          iVar9 = *(int *)(lVar10 + 0xb8);
          *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0xb0);
          if (*(ulong *)(lVar10 + 8) < *(ulong *)(lVar10 + 0xb0)) {
            uVar11 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar11,0x10);
            if (cVar8 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "buffer->bytesInBuffer <= buffer->bufferSize";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
LAB_1001d47ac:
          if (iVar9 != 0) goto LAB_1001d47b1;
        }
        else {
          if (iVar9 == 1) {
            sVar4 = *(short *)(lVar10 + 0x9c);
            if ((sVar4 != 0) && (sVar4 != -0x27)) {
              *(undefined4 *)(lVar10 + 0xc2) = 0;
            }
            iVar9 = (int)sVar4;
            *(ulong *)(lVar10 + 0x10) = (ulong)*(uint *)(lVar10 + 0xc2);
            goto LAB_1001d47ac;
          }
LAB_1001d47b1:
          *(undefined1 *)(param_1 + 0x952) = 0;
        }
        uVar14 = *(ulong *)(lVar10 + 0x10);
        *(long *)(param_1 + 0x978) = *(long *)(param_1 + 0x978) + uVar14;
        plVar15 = plVar3;
        if ((uVar14 == *(ulong *)(lVar10 + 8)) ||
           (plVar7 = (long *)*plVar3, (long *)*plVar3 == (long *)0x0)) {
          if (uVar14 == 0) goto LAB_1001d4822;
        }
        else {
          do {
            plVar13 = plVar7;
            plVar7 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
          if (uVar14 <= (ulong)(plVar13[1] - plVar13[2])) {
            FUN_1001c631b(*(undefined8 *)(lVar10 + 0x140),plVar13[2] + plVar13[0x28]);
            plVar13[2] = plVar13[2] + *(long *)(lVar10 + 0x10);
            *(undefined8 *)(lVar10 + 0x10) = 0;
LAB_1001d4822:
            plVar15 = (long *)(param_1 + 0x988);
          }
        }
        FUN_1001c2470(plVar15,lVar10);
LAB_1001d482e:
        *(undefined8 *)(param_1 + 0x9b0) = 0;
        FUN_1001d4bac(param_1);
      }
LAB_1001d4841:
      lVar10 = FUN_1001eada7(lVar1);
    }
    FUN_1001d4bac(param_1);
    FUN_1001db478(param_1);
    cVar8 = *(char *)(param_1 + 0x9d1);
    FUN_1001e9eb9(param_1 + 8);
    if (cVar8 != '\0') break;
    FUN_1001eae60(lVar1);
    lVar10 = FUN_1001ead5c(lVar1);
    FUN_1001eaeb8(lVar1);
  } while (lVar10 != 0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


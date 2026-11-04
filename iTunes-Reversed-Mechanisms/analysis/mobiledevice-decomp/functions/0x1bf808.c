// rea decompile_all
// name: _amai_zipClose
// address: 0x1bf808
// body: available
// range: 0x1bf808-0x1bfb3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _amai_zipClose(void *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  ulong local_40;
  uint local_34;
  
  if (param_1 == (void *)0x0) {
    uVar11 = 0xffffff9a;
  }
  else {
    uVar4 = 0;
    if (*(int *)((long)param_1 + 0x58) == 1) {
      uVar4 = _amai_zipCloseFileInZipRaw(param_1,0,0);
    }
    if ((param_2 == (char *)0x0) &&
       (param_2 = *(char **)((long)param_1 + 0x4158), param_2 == (char *)0x0)) {
      param_2 = (char *)0x0;
      local_40 = 0;
    }
    else {
      local_40 = _strlen(param_2);
    }
    lVar6 = (**(code **)((long)param_1 + 0x18))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x40));
    uVar12 = 0;
    if (uVar4 == 0) {
      plVar10 = *(long **)((long)param_1 + 0x48);
      if (plVar10 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar12 = 0;
        uVar4 = 0;
        do {
          lVar9 = plVar10[2];
          bVar13 = uVar4 == 0;
          uVar4 = 0xffffffff;
          if (bVar13) {
            if (lVar9 == 0) {
              lVar9 = 0;
              uVar4 = 0;
            }
            else {
              lVar7 = (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),
                                 *(undefined8 *)((long)param_1 + 0x40),plVar10 + 4);
              lVar9 = plVar10[2];
              uVar4 = -(uint)(lVar7 != lVar9);
            }
          }
          uVar12 = uVar12 + lVar9;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    puVar3 = *(undefined8 **)((long)param_1 + 0x48);
    while (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar3;
      _free(puVar3);
      puVar3 = puVar1;
    }
    if (uVar4 == 0) {
      uVar2 = *(undefined8 *)((long)param_1 + 0x40);
      uVar8 = 0x6054b50;
      lVar9 = 0;
      do {
        *(char *)((long)&local_34 + lVar9) = (char)uVar8;
        uVar8 = uVar8 >> 8;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      lVar9 = (**(code **)((long)param_1 + 0x10))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar2,&local_34,4);
      uVar4 = 0xffffffff;
      if (lVar9 == 4) {
        local_34 = local_34 & 0xffff0000;
        lVar9 = (**(code **)((long)param_1 + 0x10))
                          (*(undefined8 *)((long)param_1 + 0x38),
                           *(undefined8 *)((long)param_1 + 0x40),&local_34,2);
        if (lVar9 == 2) {
          local_34 = local_34 & 0xffff0000;
          lVar9 = (**(code **)((long)param_1 + 0x10))
                            (*(undefined8 *)((long)param_1 + 0x38),
                             *(undefined8 *)((long)param_1 + 0x40),&local_34,2);
          if (lVar9 == 2) {
            local_34._0_2_ = (short)*(ulong *)((long)param_1 + 0x4150);
            if (0xffff < *(ulong *)((long)param_1 + 0x4150)) {
              local_34._0_2_ = 0xffff;
            }
            lVar9 = (**(code **)((long)param_1 + 0x10))
                              (*(undefined8 *)((long)param_1 + 0x38),
                               *(undefined8 *)((long)param_1 + 0x40),&local_34,2);
            if (lVar9 == 2) {
              local_34._0_2_ = (short)*(ulong *)((long)param_1 + 0x4150);
              if (0xffff < *(ulong *)((long)param_1 + 0x4150)) {
                local_34._0_2_ = 0xffff;
              }
              lVar9 = (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),
                                 *(undefined8 *)((long)param_1 + 0x40),&local_34,2);
              if (lVar9 == 2) {
                uVar2 = *(undefined8 *)((long)param_1 + 0x40);
                lVar9 = 0;
                do {
                  uVar8 = uVar12;
                  *(char *)((long)&local_34 + lVar9) = (char)uVar8;
                  lVar9 = lVar9 + 1;
                  uVar12 = uVar8 >> 8;
                } while (lVar9 != 4);
                if (0xff < uVar8) {
                  local_34 = 0xffffffff;
                }
                lVar9 = (**(code **)((long)param_1 + 0x10))
                                  (*(undefined8 *)((long)param_1 + 0x38),uVar2,&local_34,4);
                if (lVar9 == 4) {
                  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
                  lVar9 = 0;
                  uVar12 = lVar6 - *(long *)((long)param_1 + 0x4148);
                  do {
                    uVar8 = uVar12;
                    *(char *)((long)&local_34 + lVar9) = (char)uVar8;
                    lVar9 = lVar9 + 1;
                    uVar12 = uVar8 >> 8;
                  } while (lVar9 != 4);
                  if (0xff < uVar8) {
                    local_34 = 0xffffffff;
                  }
                  lVar6 = (**(code **)((long)param_1 + 0x10))
                                    (*(undefined8 *)((long)param_1 + 0x38),uVar2,&local_34,4);
                  if (lVar6 == 4) {
                    local_34._0_2_ = (short)local_40;
                    if (0xffff < (uint)local_40) {
                      local_34._0_2_ = 0xffff;
                    }
                    lVar6 = (**(code **)((long)param_1 + 0x10))
                                      (*(undefined8 *)((long)param_1 + 0x38),
                                       *(undefined8 *)((long)param_1 + 0x40),&local_34,2);
                    uVar4 = -(uint)(lVar6 != 2);
                    if ((lVar6 == 2) && ((uint)local_40 != 0)) {
                      uVar12 = (**(code **)((long)param_1 + 0x10))
                                         (*(undefined8 *)((long)param_1 + 0x38),
                                          *(undefined8 *)((long)param_1 + 0x40),param_2,
                                          local_40 & 0xffffffff);
                      uVar4 = -(uint)(uVar12 != (local_40 & 0xffffffff));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar5 = (**(code **)((long)param_1 + 0x28))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x40));
    uVar11 = -(uint)(uVar4 == 0) | uVar4;
    if (iVar5 == 0) {
      uVar11 = uVar4;
    }
    if (*(void **)((long)param_1 + 0x4158) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0x4158));
    }
    _free(param_1);
  }
  return uVar11;
}


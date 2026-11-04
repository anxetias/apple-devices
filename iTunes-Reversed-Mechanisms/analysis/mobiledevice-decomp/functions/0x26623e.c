// rea decompile_all
// name: _stmDFU_parseConfiguration
// address: 0x26623e
// body: available
// range: 0x26623e-0x266581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26657d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _stmDFU_parseConfiguration(undefined4 *param_1)

{
  char *pcVar1;
  ushort uVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long *plVar9;
  undefined4 uVar10;
  byte *pbVar11;
  char *pcVar12;
  int local_164;
  char *local_160;
  int local_154;
  long local_150;
  undefined1 local_141;
  int local_140;
  char local_13a;
  byte local_139;
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar10 = 0xffffffed;
  if ((param_1 != (undefined4 *)0x0) && (lVar3 = *(long *)(param_1 + 10), lVar3 != 0)) {
    *param_1 = 2;
    *(undefined **)(param_1 + 0xc) = &_stmDFUDeviceFunctions;
    puVar6 = _calloc(1,8);
    *(undefined8 **)(lVar3 + 0x48) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      pbVar4 = *(byte **)(lVar3 + 0x10);
      pbVar11 = pbVar4 + *pbVar4;
      uVar2 = *(ushort *)(pbVar4 + 2);
      if (pbVar11 < pbVar4 + uVar2) {
        do {
          if (pbVar11[1] == 4) {
            if (((pbVar11[5] != 0xfe) || (pbVar11[6] != 1)) || (pbVar11[7] != 2)) {
              uVar10 = 0xffffffed;
              goto LAB_00266552;
            }
            local_160 = (char *)_usbDFU_copyStringDescriptor(param_1,pbVar11[8]);
            if (local_160 != (char *)0x0) {
              local_150 = 0;
              if (((*(long *)(param_1 + 10) != 0) &&
                  (puVar6 = *(undefined8 **)(*(long *)(param_1 + 10) + 0x48),
                  puVar6 != (undefined8 *)0x0)) &&
                 ((*local_160 == '@' &&
                  (iVar5 = _sscanf(local_160,"@%[^/]%n",local_138,&local_140), iVar5 == 1)))) {
                pcVar12 = local_160 + local_140;
                while( true ) {
                  iVar5 = _sscanf(pcVar12,"/0x%lx%n",&local_150,&local_140);
                  if ((iVar5 != 1) || (puVar7 = _malloc(0x30), puVar7 == (undefined8 *)0x0))
                  goto LAB_0026651e;
                  pcVar8 = _strdup(local_138);
                  *puVar7 = pcVar8;
                  if (pcVar8 == (char *)0x0) break;
                  puVar7[3] = 0;
                  puVar7[4] = puVar7 + 3;
                  puVar7[1] = local_150;
                  *(undefined4 *)(puVar7 + 2) = 0;
                  puVar7[5] = *puVar6;
                  *puVar6 = puVar7;
                  pcVar8 = pcVar12 + local_140;
                  do {
                    plVar9 = _malloc(0x20);
                    if (plVar9 == (long *)0x0) goto LAB_0026651e;
                    plVar9[3] = 0;
                    *(long **)puVar7[4] = plVar9;
                    puVar7[4] = plVar9 + 3;
                    iVar5 = _sscanf(pcVar8,"%c%u*%u%c%c%n",&local_141,&local_164,&local_154,
                                    &local_13a,&local_139,&local_140);
                    if (iVar5 != 5) goto LAB_0026651e;
                    if (local_13a == 'K') {
LAB_002664b6:
                      local_154 = local_154 << 10;
                    }
                    else if (local_13a == 'M') {
                      local_154 = local_154 << 10;
                      goto LAB_002664b6;
                    }
                    *plVar9 = local_150;
                    *(int *)((long)plVar9 + 0xc) = local_154;
                    *(short *)(plVar9 + 1) = (short)local_164;
                    *(uint *)(plVar9 + 2) = local_139 & 0xf;
                    local_150 = (ulong)(uint)(local_164 * local_154) + local_150;
                    *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + local_164 * local_154;
                    pcVar12 = pcVar8 + local_140;
                    pcVar1 = pcVar8 + local_140;
                    pcVar8 = pcVar12;
                  } while (*pcVar1 == ',');
                }
                _free(puVar7);
              }
LAB_0026651e:
              _free(local_160);
            }
          }
          pbVar11 = pbVar11 + *pbVar11;
        } while (pbVar11 < pbVar4 + uVar2);
      }
      uVar10 = 0;
    }
  }
LAB_00266552:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}


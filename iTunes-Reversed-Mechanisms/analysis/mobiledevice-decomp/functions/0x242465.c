// rea decompile_all
// name: _DEREncoderAddDataFromEncoderNoCopy
// address: 0x242465
// body: available
// range: 0x242465-0x24260f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2424bc to 0x2423a8 __DEREncoderAddDataFromEncoderByEncoding (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x24260b to 0x241bf4 __DEREncoderAddEncodedData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DEREncoderAddDataFromEncoderNoCopy
          (long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long **pplVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  long *local_38;
  
  uVar7 = 1;
  if (param_2 != 0 && param_1 != (long *)0x0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      uVar7 = __DEREncoderAddDataFromEncoderByEncoding(param_1,param_2);
      return uVar7;
    }
    puVar8 = (undefined8 *)__EncodedDataCreate(param_3,param_4,0,(int)param_1[1],1,0);
    uVar7 = 2;
    if (puVar8 != (undefined8 *)0x0) {
      plVar12 = (long *)*param_1;
      pplVar11 = &local_38;
      local_38 = (long *)0x0;
      do {
        if (plVar12 == (long *)0x0) {
          *puVar8 = local_38;
          if (local_38 != (long *)0x0) goto LAB_002425f6;
          goto LAB_002425ce;
        }
        pplVar9 = _malloc(0x38);
        if (pplVar9 == (long **)0x0) {
          plVar10 = local_38;
          if (local_38 == (long *)0x0) break;
          do {
            plVar10 = (long *)*plVar10;
            __EncodedDataRelease();
          } while (plVar10 != (long *)0x0);
        }
        else {
          plVar10 = (long *)plVar12[6];
          plVar1 = (long *)plVar12[1];
          plVar3 = (long *)plVar12[2];
          plVar4 = (long *)plVar12[3];
          plVar5 = (long *)plVar12[4];
          plVar6 = (long *)plVar12[5];
          *pplVar9 = (long *)*plVar12;
          pplVar9[1] = plVar1;
          pplVar9[2] = plVar3;
          pplVar9[3] = plVar4;
          pplVar9[6] = plVar10;
          pplVar9[4] = plVar5;
          pplVar9[5] = plVar6;
          *pplVar9 = (long *)0x0;
          *(undefined4 *)(pplVar9 + 2) = 1;
          plVar1 = (long *)plVar12[1];
          if (plVar1 < plVar12 + 7 && (long *)((long)plVar12 + 0x1cU) <= plVar1) {
            pplVar9[1] = (long *)((long)pplVar9 +
                                 (long)plVar1 + (0x1c - (long)((long)plVar12 + 0x1cU)));
          }
          else if (plVar10 != (long *)0x0) {
            *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
          }
          *pplVar11 = (long *)pplVar9;
          plVar12 = (long *)*plVar12;
          pplVar11 = pplVar9;
        }
      } while (pplVar9 != (long **)0x0);
      *puVar8 = 0;
LAB_002425ce:
      if (*param_1 == 0) {
LAB_002425f6:
        uVar7 = __DEREncoderAddEncodedData(param_2,puVar8);
        return uVar7;
      }
      do {
        puVar2 = (undefined8 *)*puVar8;
        __EncodedDataRelease(puVar8);
        puVar8 = puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      uVar7 = 2;
    }
  }
  return uVar7;
}


// rea decompile_all
// name: AMRLocalUSBInterface::getPipesWithReply:
// address: 0xf38f1
// body: available
// range: 0xf38f1-0xf3ad9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void AMRLocalUSBInterface::getPipesWithReply_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  undefined2 local_3e;
  uint local_3c;
  undefined1 local_38;
  undefined1 local_37;
  byte local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  
  local_36 = 0;
  uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x98))();
  if ((int)uVar5 == 0) {
    if (local_36 == 0) {
      iVar4 = 0;
      local_32 = -1;
      uVar8 = 0xff;
      local_31 = -1;
      uVar10 = 0xff;
      cVar2 = -1;
    }
    else {
      local_3c = (uint)CONCAT71((int7)(uVar5 >> 8),0xff);
      local_31 = -1;
      local_33 = -1;
      uVar8 = 0xff;
      local_32 = -1;
      uVar10 = 1;
      do {
        local_34 = '\0';
        local_38 = 0;
        local_35 = '\0';
        local_37 = 0;
        local_3e = 0;
        cVar2 = (char)uVar10;
        iVar4 = (**(code **)(**(long **)(param_1 + 8) + 0xd0))
                          (*(long **)(param_1 + 8),uVar10 & 0xff,&local_34,&local_38,&local_35,
                           &local_3e,&local_37);
        if (iVar4 != 0) {
          _createAndLogUSBError(iVar4,&cf_errorgettinginformationforpipe_d_0x_x,uVar10,iVar4);
          uVar10 = local_3c;
          cVar2 = local_33;
          goto LAB_000f3a99;
        }
        cVar7 = local_33;
        cVar9 = local_32;
        cVar1 = local_31;
        if (local_35 == '\x03') {
          if (((local_34 != '\x01') || (cVar9 = cVar2, local_32 != -1)) &&
             (cVar2 = (char)uVar8, cVar9 = local_32, uVar8 = uVar8 & 0xff,
             local_34 == '\0' && cVar2 == -1)) {
            uVar8 = uVar10;
          }
        }
        else if ((((local_35 == '\x02') && ((local_34 != '\x01' || (cVar7 = cVar2, local_33 != -1)))
                  ) && (cVar7 = local_33, local_34 == '\0')) &&
                ((cVar1 = cVar2, local_31 != -1 &&
                 (cVar2 = (char)local_3c, local_3c = local_3c & 0xff, cVar1 = local_31, cVar2 == -1)
                 ))) {
          local_3c = uVar10;
        }
        local_31 = cVar1;
        local_32 = cVar9;
        local_33 = cVar7;
        bVar11 = uVar10 < local_36;
        uVar10 = uVar10 + 1;
      } while (bVar11);
      iVar4 = 0;
      uVar10 = local_3c;
      cVar2 = local_33;
    }
LAB_000f3a99:
    uVar3 = __AMRestoreErrorForIOReturn(iVar4,0x7da);
    uVar10 = uVar10 & 0xff;
    uVar8 = uVar8 & 0xff;
    uVar6 = 0;
    cVar7 = local_32;
    cVar9 = local_31;
  }
  else {
    uVar6 = _createAndLogUSBError
                      (uVar5 & 0xffffffff,&cf_errorgettingnumberofendpoints_0x_x,uVar5 & 0xffffffff)
    ;
    uVar3 = __AMRestoreErrorForIOReturn(uVar5 & 0xffffffff,0x7da);
    uVar8 = 0xff;
    cVar2 = -1;
    uVar10 = 0xff;
    cVar7 = -1;
    cVar9 = -1;
  }
  (**(code **)(param_3 + 0x10))(param_3,uVar3,cVar7,uVar8,cVar2,cVar9,uVar10,uVar6);
  return;
}


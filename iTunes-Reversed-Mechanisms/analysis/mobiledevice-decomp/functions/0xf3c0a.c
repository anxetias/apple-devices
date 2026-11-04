// rea decompile_all
// name: AMRLocalUSBInterface::readPipe:length:withReply:
// address: 0xf3c0a
// body: available
// range: 0xf3c0a-0xf3ce9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void AMRLocalUSBInterface::readPipe_length_withReply_
               (ID param_1,SEL param_2,unsigned_char param_3,unsigned_int param_4,ID param_5,
               undefined4 param_6)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 in_register_00000011;
  unsigned_int local_38;
  undefined4 local_34;
  
  local_34 = (undefined4)CONCAT71(in_register_00000011,param_3);
  uVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableData);
  puVar3 = PTR__objc_msgSend_00441098;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"initWithLength:",param_4);
  plVar1 = *(long **)(param_1 + 8);
  pcVar2 = *(code **)(*plVar1 + 0xf8);
  local_38 = param_4;
  uVar8 = (*(code *)puVar3)(uVar7,"mutableBytes");
  iVar4 = (*pcVar2)(plVar1,local_34,uVar8,&local_38);
  if (iVar4 == 0) {
    (*(code *)PTR__objc_msgSend_00441098)(uVar7,"setLength:",local_38);
    uVar8 = uVar7;
  }
  else {
    uVar8 = 0;
  }
  uVar5 = __AMRestoreErrorForIOReturn(iVar4,0x7d4);
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"length");
  (**(code **)(param_5 + 0x10))(param_5,uVar5,uVar8,uVar6,0);
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  return;
}


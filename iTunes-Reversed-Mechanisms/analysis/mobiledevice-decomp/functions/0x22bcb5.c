// rea decompile_all
// name: UARPSuperBinaryBackDeploy::expandSuperBinary
// address: 0x22bcb5
// body: available
// range: 0x22bcb5-0x22be33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char UARPSuperBinaryBackDeploy::expandSuperBinary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 local_8c [40];
  undefined4 local_64 [2];
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_40;
  uint local_3c;
  char *local_38;
  
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableArray,"new");
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar4 = (*(code *)PTR__objc_msgSend_00441098)(*(long *)(param_1 + 0x20),"length"),
     0x2b < uVar4)) {
    (*(code *)PTR__objc_msgSend_00441098)
              (*(undefined8 *)(param_1 + 0x20),"getBytes:range:",local_64,0,0x2c);
    _uarpSuperBinaryHeaderEndianSwap(local_64,local_64);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x20),"length");
    if (uVar4 < local_5c) {
      return '\0';
    }
    *(undefined4 *)(param_1 + 0x28) = local_64[0];
    uVar5 = _objc_alloc(&objc::class_t::UARPAssetVersionBackDeploy);
    uVar3 = (*(code *)puVar1)(uVar5,"initWithMajorVersion:minorVersion:releaseVersion:buildVersion:"
                              ,local_58,local_54,local_50,local_4c);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    cVar2 = (*(code *)puVar1)(param_1,"expandMetaData:",local_64);
    if (cVar2 != '\0') {
      uVar6 = (ulong)local_40;
      uVar4 = (ulong)local_3c;
      local_38 = "preparePayload:";
      do {
        puVar1 = PTR__objc_msgSend_00441098;
        if (uVar4 < 0x28) {
          return '\x01';
        }
        (*(code *)PTR__objc_msgSend_00441098)
                  (*(undefined8 *)(param_1 + 0x20),"getBytes:range:",local_8c,uVar6,0x28);
        _uarpPayloadHeaderEndianSwap(local_8c,local_8c);
        cVar2 = (*(code *)puVar1)(param_1,local_38,local_8c);
        uVar6 = uVar6 + 0x28;
        uVar4 = uVar4 - 0x28;
      } while (cVar2 != '\0');
    }
  }
  return '\0';
}


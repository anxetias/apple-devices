// rea decompile_all
// name: _uarpPlatformAssetSuperBinaryRequestWindowFilled
// address: 0x180a77
// body: available
// range: 0x180a77-0x180b95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpPlatformAssetSuperBinaryRequestWindowFilled
          (undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  _UARPLayer2AssetStore(param_1,param_2,0,*(undefined8 *)(param_3 + 4),param_3[1],*param_3);
  puVar4 = *(undefined4 **)(param_3 + 4);
  uVar5 = _uarpNtohl(*puVar4);
  *param_2 = uVar5;
  uVar5 = _uarpNtohl(puVar4[1]);
  param_2[1] = uVar5;
  uVar5 = _uarpNtohl(puVar4[2]);
  param_2[2] = uVar5;
  _uarpVersionEndianSwap(puVar4 + 3,param_2 + 3);
  uVar5 = _uarpNtohl(puVar4[7]);
  param_2[7] = uVar5;
  uVar5 = _uarpNtohl(puVar4[8]);
  param_2[8] = uVar5;
  uVar5 = _uarpNtohl(puVar4[9]);
  param_2[9] = uVar5;
  uVar6 = _uarpNtohl(puVar4[10]);
  param_2[10] = uVar6;
  param_3[0x16] = param_3[0x15];
  uVar5 = param_2[8];
  uVar1 = param_2[7];
  uVar7 = 8;
  if ((!CARRY4(uVar5,uVar1)) && (uVar2 = param_2[0x11], uVar1 <= uVar2 && uVar5 <= uVar2)) {
    uVar3 = param_2[9];
    if (((!CARRY4(uVar6,uVar3)) && (uVar3 <= uVar2 && uVar6 <= uVar2)) &&
       ((((uVar2 < uVar5 + uVar1 || (uVar2 < uVar6 + uVar3)) || (param_2[1] != 0x2c)) ||
        (uVar7 = 0, 3 < *param_2)))) {
      _uarpPlatformAssetProcessingCompleteInternal
                (param_1,*(undefined8 *)(param_2 + 0xae),param_2,4,0,0);
      uVar7 = 0x2f;
    }
  }
  return uVar7;
}


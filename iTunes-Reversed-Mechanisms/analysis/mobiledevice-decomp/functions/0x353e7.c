// rea decompile_all
// name: __walkUSBAncestors
// address: 0x353e7
// body: available
// range: 0x353e7-0x3556c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __walkUSBAncestors(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  uVar3 = (*(code *)puVar1)(param_2);
  local_80 = 0;
  local_70 = 0x3032000000;
  local_68 = ___Block_byref_object_copy_;
  local_60 = ___Block_byref_object_dispose_;
  local_58 = 0;
  local_b0 = PTR___NSConcreteStackBlock_004412a8;
  local_a8 = 0xc2000000;
  local_a0 = ____walkUSBAncestors_block_invoke;
  local_98 = &___block_descriptor_48_e8_32bs40r_e33_v24__0__<PSIORegistryEntry>_8_Q16l;
  local_78 = &local_80;
  local_90 = (*(code *)puVar1)(uVar3);
  local_88 = &local_80;
  local_48 = local_90;
  lVar4 = _objc_retainBlock(&local_b0);
  local_38 = (*(code *)puVar1)(uVar2);
  puVar1 = PTR__objc_release_004410a0;
  if (local_38 != 0) {
    local_50 = "enumeratePlane:options:usingBlock:";
    lVar6 = local_38;
    do {
      local_40 = 0;
      uVar2 = local_78[5];
      local_78[5] = 0;
      (*(code *)puVar1)(uVar2);
      (**(code **)(lVar4 + 0x10))(lVar4,lVar6,&local_40);
      if (local_40 == 0) {
        (*(code *)PTR__objc_msgSend_00441098)(lVar6,local_50,&cf_IOService,3,lVar4);
      }
      lVar5 = (*(code *)PTR__objc_retain_004410a8)(local_78[5]);
      (*(code *)puVar1)(lVar6);
      lVar6 = lVar5;
    } while (lVar5 != 0);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  (*(code *)puVar1)(local_90);
  __Block_object_dispose(&local_80,8);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(local_48);
  (*(code *)puVar1)(local_38);
  return;
}


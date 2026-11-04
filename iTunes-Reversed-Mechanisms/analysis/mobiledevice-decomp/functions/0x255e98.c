// rea decompile_all
// name: std::vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::__swap_out_circular_buffer
// address: 0x255e98
// body: available
// range: 0x255e98-0x255f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<SERestoreInfo::BLOB, std::allocator<SERestoreInfo::BLOB>
   >::__swap_out_circular_buffer(std::__split_buffer<SERestoreInfo::BLOB,
   std::allocator<SERestoreInfo::BLOB>&>&) */

void __thiscall
std::vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::__swap_out_circular_buffer
          (vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>> *this,
          __split_buffer *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  puVar8 = (undefined8 *)((long)puVar9 + (*(long *)(param_1 + 8) - (long)puVar1));
  puVar6 = puVar9;
  puVar7 = puVar8;
  if (puVar9 != puVar1) {
    do {
      *puVar7 = &PTR__BLOB_0044f1c8;
      uVar3 = *(undefined4 *)((long)puVar6 + 0xc);
      uVar4 = *(undefined4 *)(puVar6 + 2);
      uVar5 = *(undefined4 *)((long)puVar6 + 0x14);
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar4;
      *(undefined4 *)((long)puVar7 + 0x14) = uVar5;
      puVar7[3] = puVar6[3];
      puVar6 = puVar6 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar6 != puVar1);
    do {
      (**(code **)*puVar9)(puVar9);
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar1);
  }
  *(undefined8 **)(param_1 + 8) = puVar8;
  uVar2 = *(undefined8 *)this;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)this = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


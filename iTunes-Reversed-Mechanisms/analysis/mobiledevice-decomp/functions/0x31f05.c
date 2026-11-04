// rea decompile_all
// name: _taDFU_AppleKIS_download
// address: 0x31f05
// body: available
// range: 0x31f05-0x320dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _taDFU_AppleKIS_download(long param_1,FILE *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  size_t sVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_e0 [4];
  ushort local_dc;
  int local_80;
  undefined4 uStack_7c;
  long local_50;
  long local_48;
  long local_40;
  int local_34;
  
  local_34 = 0;
  local_48 = 0;
  local_40 = 0;
  bVar6 = false;
  uVar5 = 0xfffffff7;
  local_50 = param_1;
  if ((param_1 == 0) || (param_2 == (FILE *)0x0)) goto LAB_00032082;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (((puVar1 != (undefined4 *)0x0) &&
      (((iVar2 = _fileno(param_2), iVar2 != -1 &&
        (iVar2 = _fstat_INODE64(iVar2,local_e0), -1 < iVar2)) && (SBORROW2(0,local_dc & 0xf000)))))
     && (CONCAT44(uStack_7c,local_80) != 0)) {
    bVar6 = false;
    local_40 = CONCAT44(uStack_7c,local_80);
    iVar2 = _IOServiceOpen(*puVar1,*(undefined4 *)PTR__mach_task_self__00441340,0,&local_34);
    if (iVar2 != 0) goto LAB_00032082;
    pvVar3 = _malloc(0x4000);
    if (pvVar3 != (void *)0x0) {
      if (0x3fff < local_80 + 0x3fffU) {
        uVar5 = local_80 + 0x3fffU >> 0xe;
        do {
          sVar4 = _fread(pvVar3,1,0x4000,param_2);
          if ((sVar4 == 0) ||
             (iVar2 = _IOConnectCallMethod(local_34,0,&local_48,1,pvVar3,sVar4,0,0,0,0), iVar2 != 0)
             ) {
            bVar6 = false;
            uVar5 = 0xfffffff7;
            goto LAB_0003207a;
          }
          local_48 = local_48 + sVar4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      iVar2 = _IOConnectCallMethod(local_34,1,&local_40,1,0,0,0,0,0,0);
      bVar6 = iVar2 == 0;
      uVar5 = (uint)bVar6 * 9 - 9;
LAB_0003207a:
      _free(pvVar3);
      goto LAB_00032082;
    }
  }
  bVar6 = false;
LAB_00032082:
  if (local_34 != 0) {
    _IOServiceClose();
    local_34 = 0;
  }
  if (!bVar6) {
    _fprintf(*(FILE **)PTR____stderrp_004412c0,"failed to restore device %s@%x with error %d\n",
             *(undefined8 *)(local_50 + 0x10),(ulong)*(uint *)(local_50 + 0x20),(ulong)uVar5);
  }
  return uVar5;
}


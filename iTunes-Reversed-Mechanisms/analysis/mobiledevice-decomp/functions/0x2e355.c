// rea decompile_all
// name: _taDFU_Library_download
// address: 0x2e355
// body: available
// range: 0x2e355-0x2e6e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _taDFU_Library_download(long param_1,FILE *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_118 [4];
  ushort local_114;
  ulong local_b8;
  FILE *local_88;
  undefined4 *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  void *local_60;
  undefined8 local_58;
  uint *puStack_50;
  ulong local_48;
  void *local_40;
  uint local_34;
  
  uVar7 = 0xfffffff7;
  local_70 = param_1;
  if (((((((param_1 != 0) && (param_2 != (FILE *)0x0)) &&
         (puVar4 = *(undefined4 **)(param_1 + 0x28), puVar4 != (undefined4 *)0x0)) &&
        ((local_68 = _initDebugUSBWithService(*puVar4), local_68 != 0 &&
         (iVar2 = _fileno(param_2), iVar2 != -1)))) &&
       ((iVar2 = _fstat_INODE64(iVar2,local_118), -1 < iVar2 &&
        ((SBORROW2(0,local_114 & 0xf000) && (local_b8 != 0)))))) && (local_b8 <= (uint)puVar4[4]))
     && (local_60 = _malloc(0x4000), local_60 != (void *)0x0)) {
    local_78 = local_b8;
    uVar6 = (int)local_b8 + 0x3fff;
    if (0x3fff < uVar6) {
      uVar6 = uVar6 >> 0xe;
      lVar8 = 0;
      local_88 = param_2;
      local_80 = puVar4;
      do {
        puVar4 = local_80;
        sVar3 = _fread(local_60,1,0x4000,local_88);
        if (sVar3 == 0) goto LAB_0002e6d3;
        lVar1 = *(long *)(puVar4 + 2);
        local_58 = 0;
        puStack_50 = (uint *)0x0;
        local_48 = 0;
        puVar4 = _malloc(0x4020);
        if (puVar4 == (undefined4 *)0x0) goto LAB_0002e6d3;
        puStack_50 = (uint *)(lVar1 + lVar8);
        local_58 = CONCAT71(local_58._1_7_,0x10);
        local_58 = CONCAT44(0xd,CONCAT22(0x10f1,(undefined2)local_58));
        local_48 = CONCAT44(local_48._4_4_,(int)sVar3);
        local_40 = local_60;
        __os_log_internal(0,PTR___os_log_default_004412f0,1,
                          "Write data start portal: %d seq: 0x%x addr: 0x%llx bytes: %d",0x10,
                          "ameworks/Bom.framework/Versions/A/Bom",puStack_50,sVar3);
        local_34 = 0x4020;
        iVar2 = _serialize_paw(&local_58,puVar4,&local_34);
        if ((iVar2 != 0) ||
           (iVar2 = _debug_usb_write(local_68,local_58 & 0xff,puVar4,local_34), iVar2 != 0)) {
LAB_0002e693:
          __os_log_internal(0,PTR___os_log_default_004412f0,0x10,
                            "Write data error portal: %d seq: 0x%x addr: 0x%llx bytes: %d",
                            local_58 & 0xff,local_58._2_2_,puStack_50,local_48 & 0xffffffff);
          _free(puVar4);
          goto LAB_0002e6d3;
        }
        local_34 = 0x4020;
        iVar2 = _debug_usb_read(local_68,local_58 & 0xff,puVar4,&local_34);
        if ((iVar2 != 0) || (local_34 < 0x14)) goto LAB_0002e693;
        __os_log_internal(0,PTR___os_log_default_004412f0,2,
                          "Write data response 0x%x 0x%x 0x%x 0x%x 0x%x",*puVar4,puVar4[1],puVar4[2]
                          ,puVar4[3],puVar4[4]);
        if ((uint)puVar4[3] < (uint)local_48) goto LAB_0002e693;
        __os_log_internal(0,PTR___os_log_default_004412f0,1,
                          "Write data end portal: %d seq: 0x%x addr: 0x%llx bytes: %d",
                          local_58 & 0xff,local_58._2_2_,puStack_50,local_48 & 0xffffffff);
        _free(puVar4);
        lVar8 = lVar8 + sVar3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    local_34 = (uint)local_78;
    local_58 = 0x1010310f00010;
    pvVar5 = _malloc(0x40);
    if (pvVar5 == (void *)0x0) {
LAB_0002e6d3:
      _free(local_60);
      uVar7 = 0xfffffff7;
    }
    else {
      puStack_50 = &local_34;
      iVar2 = _write_config(local_68,&local_58,pvVar5,0x40);
      _free(pvVar5);
      _free(local_60);
      uVar7 = (ulong)(iVar2 == 0) * 9 - 9 & 0xffffffff;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  _fprintf(*(FILE **)PTR____stderrp_004412c0,"failed to restore device %s@%x with error %d\n",
           *(undefined8 *)(local_70 + 0x10),(ulong)*(uint *)(local_70 + 0x20),uVar7);
  return uVar7;
}


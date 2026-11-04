// rea decompile_all
// name: _usbDFU_download
// address: 0x2f239
// body: available
// range: 0x2f239-0x2f498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _usbDFU_download(long param_1,FILE *param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 local_d8 [4];
  ushort local_d4;
  int local_78;
  undefined4 uStack_74;
  int local_48 [2];
  int local_40;
  long local_38;
  
  uVar9 = 0xfffffff7;
  if ((param_1 == 0) || (lVar8 = *(long *)(param_1 + 0x28), lVar8 == 0)) goto LAB_0002f3ee;
  if (((((param_2 == (FILE *)0x0) ||
        (((*(long *)(lVar8 + 0x20) == 0 || ((*(byte *)(*(long *)(lVar8 + 0x20) + 2) & 1) == 0)) ||
         (*(char *)(lVar8 + 0x40) != '\0')))) ||
       (((iVar3 = _fileno(param_2), iVar3 == -1 ||
         (iVar3 = _fstat_INODE64(iVar3,local_d8), iVar3 < 0)) || (!SBORROW2(0,local_d4 & 0xf000)))))
      || ((CONCAT44(uStack_74,local_78) == 0 ||
          (iVar3 = _usbDFU_appendSuffix(param_1,param_2), iVar3 != 0)))) ||
     ((*(long *)(param_1 + 0x28) == 0 ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar2 == 0)))) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar1 = *(ushort *)(lVar2 + 5);
    uVar7 = (ulong)uVar1;
    local_38 = lVar8;
    if ((uVar7 == 0) || (pvVar5 = _malloc(uVar7), pvVar5 == (void *)0x0)) {
      pvVar5 = (void *)0x0;
      lVar8 = local_38;
    }
    else {
      uVar4 = (**(code **)(**(long **)(local_38 + 8) + 0x40))();
      if ((uVar4 == 0) && (uVar4 = _usbDFU_clearStatus(param_1), uVar4 == 0)) {
        if ((uint)-local_78 < (uint)uVar1) {
          uVar4 = _usbDFU_downloadBlock(param_1,0,0,pvVar5);
          if (uVar4 != 0) goto LAB_0002f47e;
          iVar3 = -0xb;
          while( true ) {
            uVar4 = _usbDFU_getStatus(param_1,local_48);
            if (uVar4 != 0) goto LAB_0002f47e;
            iVar3 = iVar3 + 1;
            lVar8 = local_38;
            if (iVar3 == 0) break;
            uVar9 = 0xffffffed;
            if ((local_48[0] != 0) || (local_40 != 6)) goto LAB_0002f3d2;
          }
          uVar9 = 0x10;
        }
        else {
          sVar6 = _fread(pvVar5,1,uVar7,param_2);
          lVar8 = local_38;
          if (sVar6 != 0) {
            uVar4 = _usbDFU_downloadBlock(param_1,0,sVar6 & 0xffff,pvVar5);
            if (uVar4 != 0) goto LAB_0002f47e;
            iVar3 = -10;
            do {
              uVar4 = _usbDFU_getStatus(param_1,local_48);
              uVar9 = (ulong)uVar4;
              lVar8 = local_38;
              if (((uVar4 != 0) || (iVar3 == 0)) || (uVar9 = 0xffffffed, local_48[0] != 0)) break;
              iVar3 = iVar3 + 1;
            } while (local_40 == 5);
          }
        }
      }
      else {
LAB_0002f47e:
        uVar9 = (ulong)uVar4;
        lVar8 = local_38;
      }
    }
  }
LAB_0002f3d2:
  (**(code **)(**(long **)(lVar8 + 8) + 0x48))();
  if (pvVar5 != (void *)0x0) {
    _free(pvVar5);
  }
  if ((int)uVar9 == 0) {
    return 0;
  }
LAB_0002f3ee:
  _fprintf(*(FILE **)PTR____stderrp_004412c0,"failed to restore device %s@%x with error %d\n",
           *(undefined8 *)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x20),uVar9);
  return uVar9;
}


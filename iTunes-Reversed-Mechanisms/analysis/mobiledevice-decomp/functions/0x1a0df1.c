// rea decompile_all
// name: __AMAuthInstallApImg4StitchToURL
// address: 0x1a0df1
// body: available
// range: 0x1a0df1-0x1a1047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallApImg4StitchToURL
              (long param_1,long param_2,int param_3,undefined8 param_4,code *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  size_t sVar5;
  void *pvVar6;
  size_t sVar7;
  uint uVar8;
  char *pcVar9;
  void *local_58;
  void *local_50;
  void *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  local_58 = (void *)0x0;
  local_38 = 0;
  local_48 = (void *)0x0;
  local_34 = 0;
  local_50 = (void *)0x0;
  local_3c = 0;
  if (param_1 == 0) {
    __AMAuthInstallApImg4StitchToURL_cold_7();
    iVar2 = 1;
    goto LAB_001a0f98;
  }
  if (param_3 == 0) {
    __AMAuthInstallApImg4StitchToURL_cold_6();
LAB_001a0ffe:
    iVar2 = 4;
    goto LAB_001a0f98;
  }
  if (param_2 == 0) {
    iVar3 = _Img4EncodeIMG4Tag(&local_48,&local_34);
    uVar8 = 0;
    iVar2 = 0;
    if (iVar3 == 0) goto LAB_001a0e9e;
LAB_001a0fe8:
    __AMAuthInstallApImg4StitchToURL_cold_2();
  }
  else {
    uVar1 = _CFDataGetLength(param_2);
    iVar2 = _Img4EncodeManifestHeader(uVar1,&local_58,&local_38);
    if (iVar2 == 0) {
      iVar2 = _Img4EncodeIMG4Tag(&local_48,&local_34);
      if (iVar2 != 0) goto LAB_001a0fe8;
      iVar2 = _CFDataGetLength(param_2);
      uVar8 = local_38;
LAB_001a0e9e:
      iVar2 = _Img4EncodeImg4Header(iVar2 + param_3 + local_34 + uVar8,&local_50,&local_3c);
      if (iVar2 == 0) {
        pFVar4 = (FILE *)_AMAuthInstallPlatformOpenFileStreamWithURL(param_1,"wb");
        if (pFVar4 == (FILE *)0x0) {
          __AMAuthInstallApImg4StitchToURL_cold_5(param_1);
          goto LAB_001a0ffe;
        }
        sVar5 = _fwrite(local_50,1,(ulong)local_3c,pFVar4);
        if (sVar5 == local_3c) {
          sVar5 = _fwrite(local_48,1,(ulong)local_34,pFVar4);
          if (sVar5 != local_34) {
            pcVar9 = "failed to write img4 string to dst file: %s";
            goto LAB_001a1038;
          }
          iVar2 = (*param_5)(pFVar4,param_4);
          if (iVar2 == 0 && param_2 != 0) {
            sVar5 = _fwrite(local_58,1,(ulong)local_38,pFVar4);
            if (sVar5 == local_38) {
              pvVar6 = (void *)_CFDataGetBytePtr(param_2);
              sVar5 = _CFDataGetLength(param_2);
              sVar5 = _fwrite(pvVar6,1,sVar5,pFVar4);
              sVar7 = _CFDataGetLength(param_2);
              iVar2 = 0;
              if (sVar5 == sVar7) goto LAB_001a0f90;
              pcVar9 = "failed to stitch manifest to file: %s";
            }
            else {
              pcVar9 = "failed to stitch manifest header to file: %s";
            }
            goto LAB_001a1038;
          }
        }
        else {
          pcVar9 = "failed to write header to dst file: %s";
LAB_001a1038:
          __AMAuthInstallApImg4StitchToURL_cold_4(pcVar9);
          iVar2 = 4;
        }
LAB_001a0f90:
        _fclose(pFVar4);
        goto LAB_001a0f98;
      }
      __AMAuthInstallApImg4StitchToURL_cold_3();
    }
    else {
      __AMAuthInstallApImg4StitchToURL_cold_1();
    }
  }
  iVar2 = 0xe;
LAB_001a0f98:
  if (local_58 != (void *)0x0) {
    _free(local_58);
  }
  if (local_48 != (void *)0x0) {
    _free(local_48);
  }
  if (local_50 != (void *)0x0) {
    _free(local_50);
  }
  return iVar2;
}


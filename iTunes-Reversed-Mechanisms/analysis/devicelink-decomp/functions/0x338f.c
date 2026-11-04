// rea decompile_all
// name: _DLHandleSentFilePieceEncrypted
// address: 0x338f
// body: available
// range: 0x338f-0x391e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DLHandleSentFilePieceEncrypted
          (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  size_t dataOutAvailable;
  CCCryptorRef cryptorRef;
  undefined8 *puVar1;
  char cVar2;
  CCCryptorStatus CVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  FILE *pFVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  long local_60;
  long local_58;
  void *local_50;
  uint local_44;
  undefined8 *local_40;
  size_t local_38;
  
  if (param_2 == 0) {
    return 0;
  }
  local_60 = 0;
  local_44 = 0;
  local_40 = param_5;
  lVar4 = _CFDictionaryGetValue(param_3,&cf_DLFileStatusKey);
  if (lVar4 != 0) {
    _CFNumberGetValue(lVar4,9,&local_44);
  }
  lVar4 = _CFDictionaryGetValue(param_3,&cf_DLFileDest);
  lVar5 = _CFDictionaryGetValue(param_3,&cf_DLFileOffsetKey);
  local_58 = 0;
  if (lVar5 != 0) {
    _CFNumberGetValue(lVar5,0xb,&local_58);
  }
  if ((param_4 == 0) || (*(long *)(param_1 + 200) != 0)) {
LAB_0000343f:
    if ((lVar4 != 0 && *(long *)(param_1 + 0xc0) == 0) &&
       (pcVar6 = (char *)_DLCreateCStringFromCFString(lVar4), pcVar6 != (char *)0x0)) {
      pFVar7 = _fopen(pcVar6,"w");
      puVar1 = local_40;
      *(FILE **)(param_1 + 0xc0) = pFVar7;
      if (pFVar7 == (FILE *)0x0) {
        if (local_40 != (undefined8 *)0x0) {
          uVar11 = _CFStringCreateWithFormat(0,0,&cf_Couldnotopenthefileat__s_forwriting,pcVar6);
          *puVar1 = uVar11;
        }
        _free(pcVar6);
        return 0xffffffff;
      }
      _free(pcVar6);
    }
    sVar8 = _CFDataGetLength(param_2);
    if (param_4 == 0) {
      pvVar9 = (void *)_CFDataGetBytePtr(param_2);
      goto LAB_0000357e;
    }
    if (*(long *)(param_1 + 200) != 0) {
      dataOutAvailable = sVar8 + 0x10;
      pvVar9 = _calloc(dataOutAvailable,1);
      puVar1 = local_40;
      if (pvVar9 == (void *)0x0) {
        if (local_40 == (undefined8 *)0x0) {
          return 0;
        }
        uVar11 = _CFDataGetLength(param_2);
        uVar11 = _CFStringCreateWithFormat
                           (0,0,&cf_Couldnotallocateabufferfor_ldbytesofdata_outofmemory_,uVar11);
        *puVar1 = uVar11;
        return 0;
      }
      local_38 = 0;
      cryptorRef = *(CCCryptorRef *)(param_1 + 200);
      local_50 = pvVar9;
      lVar4 = _CFDataGetBytePtr(param_2);
      pvVar9 = local_50;
      CVar3 = _CCCryptorUpdate(cryptorRef,(void *)(lVar4 + local_60),sVar8 - local_60,local_50,
                               dataOutAvailable,&local_38);
      if (CVar3 == 0) {
        cVar2 = _DLShouldLog(6);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"DLHandleSentFilePieceEncrypted",6,&cf_Decrypted_dbytes,local_38);
        }
        sVar8 = local_38;
        if (local_44 != 2) {
LAB_0000357e:
          _fwrite(pvVar9,sVar8,1,*(FILE **)(param_1 + 0xc0));
          pvVar10 = (void *)_CFDataGetBytePtr(param_2);
          if (pvVar9 != pvVar10) {
            _free(pvVar9);
          }
          if ((local_44 & 0xfffffffe) == 2) {
            _fclose(*(FILE **)(param_1 + 0xc0));
            *(undefined8 *)(param_1 + 0xc0) = 0;
            if (*(CCCryptorRef *)(param_1 + 200) != (CCCryptorRef)0x0) {
              _CCCryptorRelease(*(CCCryptorRef *)(param_1 + 200));
              *(undefined8 *)(param_1 + 200) = 0;
              return 0;
            }
            return 0;
          }
          return 0;
        }
        cVar2 = _DLShouldLog(6);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"DLHandleSentFilePieceEncrypted",6,&cf_Finalizingbytesandshuttingdownthedecryptor
                 );
        }
        CVar3 = _CCCryptorFinal(*(CCCryptorRef *)(param_1 + 200),(void *)((long)pvVar9 + local_38),
                                dataOutAvailable - local_38,&local_38);
        if (CVar3 == 0) {
          cVar2 = _DLShouldLog(6);
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                    ,"DLHandleSentFilePieceEncrypted",6,&cf_Finalized_dbytes,local_38);
          }
          sVar8 = sVar8 + local_38;
          _CCCryptorRelease(*(CCCryptorRef *)(param_1 + 200));
          *(undefined8 *)(param_1 + 200) = 0;
          goto LAB_0000357e;
        }
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          pcVar12 = &cf_Couldnotfinalizefilebytes__d;
          goto LAB_00003545;
        }
      }
      else {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          pcVar12 = &cf_Couldnotdecryptfilebytes__d;
LAB_00003545:
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"DLHandleSentFilePieceEncrypted",3,pcVar12,CVar3);
        }
      }
      _free(pvVar9);
LAB_00003554:
      if (local_40 != (undefined8 *)0x0) {
        *local_40 = &cf_CouldNotDecrypt;
      }
      return 0xffffffff;
    }
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') goto LAB_00003656;
    pcVar12 = &cf_Wedon_thaveadecryptionkeytodecryptthesebytes_Refusingtosavetodisk;
  }
  else {
    if (local_58 == 0) {
      local_38 = 0;
      lVar5 = _createFileKeyFromAuthBlob(param_2,param_4,&local_38,&local_60);
      if (lVar5 == 0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"DLHandleSentFilePieceEncrypted",3,
                  &cf_Couldnotdecryptthefileencryptionkey_Refusingtodecodethisfile);
        }
        goto LAB_00003554;
      }
      local_50 = (void *)_CFDataGetBytePtr(lVar5);
      pvVar9 = (void *)_CFDataGetBytePtr(local_38);
      CVar3 = _CCCryptorCreate(1,0,1,local_50,0x20,pvVar9,(CCCryptorRef *)(param_1 + 200));
      if (CVar3 != 0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"DLHandleSentFilePieceEncrypted",3,&cf_Couldnotsetupadecryptor__d,CVar3);
        }
        if (local_40 != (undefined8 *)0x0) {
          *local_40 = &cf_CouldNotDecrypt;
        }
        if (local_38 == 0) {
          return 0xffffffff;
        }
        _CFRelease();
        return 0xffffffff;
      }
      _CFRelease(lVar5);
      goto LAB_0000343f;
    }
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') goto LAB_00003656;
    pcVar12 = &
              cf_Encryptedbyteswerereceivedbutwedon_thaveakeytodecryptthemwith_Refusingtosavethebytes
    ;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
          ,"DLHandleSentFilePieceEncrypted",3,pcVar12);
LAB_00003656:
  if (local_40 != (undefined8 *)0x0) {
    *local_40 = &cf_CouldNotDecrypt;
    return 0xffffffff;
  }
  return 0xffffffff;
}


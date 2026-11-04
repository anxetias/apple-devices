// rea decompile_all
// name: ACFUFTABFile::isCacheValid
// address: 0x219770
// body: available
// range: 0x219770-0x2199bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::isCacheValid() */

ulong __thiscall ACFUFTABFile::isCacheValid(ACFUFTABFile *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  ACFUFTABFile *pAVar5;
  undefined8 uVar6;
  undefined8 extraout_RAX;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  ulong local_58;
  string local_48;
  undefined4 local_47;
  undefined1 local_43;
  undefined4 *local_38;
  
  if (*(ACFUDataContainer **)(this + 8) == (ACFUDataContainer *)0x0) {
    isCacheValid();
  }
  else {
    lVar2 = ACFUDataContainer::copyData(*(ACFUDataContainer **)(this + 8),0,0x30);
    if (lVar2 != 0) {
      lVar3 = _CFDataGetBytePtr(lVar2);
      if (lVar3 == 0) {
        isCacheValid();
        local_58 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0x28);
        _CFRelease(lVar2);
        if (*(ulong *)(this + 0x38) != (ulong)uVar1) {
          isCacheValid();
          goto LAB_0021999a;
        }
        if (uVar1 == 0) {
          local_58 = 1;
          goto LAB_00219981;
        }
        uVar9 = 0x30;
        local_58 = 0;
        uVar10 = 1;
        do {
          lVar2 = ACFUDataContainer::copyData(*(ACFUDataContainer **)(this + 8),uVar9,0x10);
          if (lVar2 == 0) {
            isCacheValid();
            goto LAB_0021999a;
          }
          puVar4 = (undefined4 *)_CFDataGetBytePtr(lVar2);
          local_48 = (string)0x8;
          local_47 = *puVar4;
          local_43 = 0;
          pAVar5 = (ACFUFTABFile *)
                   std::
                   __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                   ::find<std::string>((__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                                        *)(this + 0x28),&local_48);
          if (pAVar5 == this + 0x30) {
            uVar6 = ACFULogging::getLogInstance();
            puVar4 = &local_47;
            if (((byte)local_48 & 1) != 0) {
              puVar4 = local_38;
            }
            bVar11 = false;
            uVar6 = ACFULogging::handleMessage
                              (uVar6,2,
                               "%s::%s: cache does not have entry for file %s. Cache is invalid\n",
                               "ACFUFTABFile","isCacheValid",puVar4);
          }
          else {
            if (*(int *)(pAVar5 + 0x3c) == puVar4[1]) {
              if (*(int *)(pAVar5 + 0x38) == puVar4[2]) {
                uVar6 = _CFRelease(lVar2);
                bVar11 = true;
                lVar2 = 0;
                goto LAB_00219884;
              }
              uVar6 = ACFULogging::getLogInstance();
              pAVar5 = pAVar5 + 0x38;
              puVar4 = puVar4 + 2;
              pcVar7 = 
              "%s::%s: cache does not hold correct size for file %s. Cache size: %d. FTAB size: %d. Cache is invalid\n"
              ;
            }
            else {
              uVar6 = ACFULogging::getLogInstance();
              pAVar5 = pAVar5 + 0x3c;
              puVar4 = puVar4 + 1;
              pcVar7 = 
              "%s::%s: cache does not hold correct offset for file %s. Cache offset: %d. FTAB offset: %d. Cache is invalid\n"
              ;
            }
            puVar8 = &local_47;
            if (((byte)local_48 & 1) != 0) {
              puVar8 = local_38;
            }
            bVar11 = false;
            uVar6 = ACFULogging::handleMessage
                              (uVar6,2,pcVar7,"ACFUFTABFile","isCacheValid",puVar8,
                               *(undefined4 *)pAVar5,*puVar4);
          }
LAB_00219884:
          if (((byte)local_48 & 1) != 0) {
            operator_delete(local_38);
            uVar6 = extraout_RAX;
          }
          if (!bVar11) break;
          local_58 = CONCAT71((int7)((ulong)uVar6 >> 8),uVar1 <= uVar10);
          uVar9 = uVar9 + 0x10;
          bVar11 = uVar10 != uVar1;
          uVar10 = uVar10 + 1;
        } while (bVar11);
        if (lVar2 == 0) goto LAB_00219981;
      }
      _CFRelease(lVar2);
      goto LAB_00219981;
    }
    isCacheValid();
  }
LAB_0021999a:
  local_58 = 0;
LAB_00219981:
  return local_58 & 0xffffff01;
}


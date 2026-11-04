// rea decompile_all
// name: ACFUFTABFile::initCache
// address: 0x21b00c
// body: available
// range: 0x21b00c-0x21b1d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::initCache() */

uint __thiscall ACFUFTABFile::initCache(ACFUFTABFile *this)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  ACFUDataContainer *this_00;
  uint uVar8;
  string local_48;
  undefined4 local_47;
  undefined1 local_43;
  void *local_38;
  
  this_00 = *(ACFUDataContainer **)(this + 8);
  if (this_00 == (ACFUDataContainer *)0x0) {
    initCache();
  }
  else {
    if (*(long *)(this + 0x38) != 0) {
      uVar3 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar3,4,
                 "%s::%s: ftab cache had entries before ftab container was initialized. Clearing cache before moving on.\n"
                 ,"ACFUFTABFile","initCache");
      std::
      __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
      ::destroy((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                 *)(this + 0x28),*(__tree_node **)(this + 0x30));
      *(ACFUFTABFile **)(this + 0x28) = this + 0x30;
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      this_00 = *(ACFUDataContainer **)(this + 8);
    }
    lVar4 = ACFUDataContainer::copyData(this_00,0,0x30);
    if (lVar4 != 0) {
      lVar5 = _CFDataGetBytePtr(lVar4);
      if (lVar5 == 0) {
        initCache();
        uVar2 = 0;
      }
      else {
        iVar7 = *(int *)(lVar5 + 0x28);
        _CFRelease(lVar4);
        if (iVar7 == 0) goto LAB_0021b1ae;
        uVar8 = 0x30;
        uVar1 = 0;
        do {
          uVar2 = uVar1;
          iVar7 = iVar7 + -1;
          lVar4 = ACFUDataContainer::copyData(*(ACFUDataContainer **)(this + 8),uVar8,0x10);
          if (lVar4 == 0) {
            initCache();
            goto LAB_0021b1b1;
          }
          puVar6 = (undefined4 *)_CFDataGetBytePtr(lVar4);
          if (puVar6 == (undefined4 *)0x0) {
            initCache();
            goto LAB_0021b18a;
          }
          local_48 = (string)0x8;
          local_47 = *puVar6;
          local_43 = 0;
          uVar2 = updateCache(this,&local_48,puVar6[1],puVar6[2]);
          if ((byte)uVar2 == 0) {
            uVar3 = ACFULogging::getLogInstance();
            ACFULogging::handleMessage
                      (uVar3,2,"%s::%s: failed to initialize cache\n","ACFUFTABFile","initCache");
          }
          else {
            _CFRelease(lVar4);
            lVar4 = 0;
          }
          if (((byte)local_48 & 1) != 0) {
            operator_delete(local_38);
          }
          uVar8 = uVar8 + 0x10;
          uVar1 = 1;
        } while (((byte)uVar2 & iVar7 != 0) != 0);
        if (lVar4 == 0) goto LAB_0021b1b1;
      }
LAB_0021b18a:
      _CFRelease(lVar4);
      goto LAB_0021b1b1;
    }
    initCache();
  }
LAB_0021b1ae:
  uVar2 = 0;
LAB_0021b1b1:
  return uVar2 & 0xffffff01;
}


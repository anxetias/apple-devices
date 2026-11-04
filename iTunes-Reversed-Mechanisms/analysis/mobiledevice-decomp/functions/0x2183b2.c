// rea decompile_all
// name: ACFUFTABFile::create
// address: 0x2183b2
// body: available
// range: 0x2183b2-0x2185cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::create(__CFData const*, ACFUFTABFile::FTABOptimization, unsigned short) */

ACFUFTABFile * __thiscall
ACFUFTABFile::create(ACFUFTABFile *this,__CFData *param_1,uint param_3,short param_4)

{
  char cVar1;
  ACFUFile *this_00;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *local_50;
  byte *local_48;
  byte **local_38;
  
  this_00 = operator_new(0x60);
  ACFUFile::ACFUFile(this_00);
  *(undefined ***)this_00 = &PTR_copyFWDataByName_0044de40;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(ACFUFile **)(this_00 + 0x28) = this_00 + 0x30;
  *(undefined4 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(ACFUFile **)(this_00 + 0x48) = this_00 + 0x50;
  if ((param_3 & 2) == 0) {
    cVar1 = init((ACFUFTABFile *)this_00,param_1);
    if (cVar1 != '\0') {
      if (param_4 != -1) {
        embeddedFTABFilenamesForChipRevision((ACFUFTABFile *)&local_50,(uchar)param_4);
        for (pbVar6 = local_50; pbVar6 != local_48; pbVar6 = pbVar6 + 0x18) {
          cVar1 = (**(code **)(*(long *)this_00 + 0x10))(this_00,pbVar6);
          if (cVar1 != '\0') {
            uVar2 = ACFULogging::getLogInstance();
            if ((*pbVar6 & 1) == 0) {
              pbVar5 = pbVar6 + 1;
            }
            else {
              pbVar5 = *(byte **)(pbVar6 + 0x10);
            }
            ACFULogging::handleMessage
                      (uVar2,0,"%s::%s: Using embedded ftab \'%s\'\n","ACFUFTABFile","create",pbVar5
                      );
            uVar2 = (*(code *)**(undefined8 **)this_00)(this_00,pbVar6);
            create(this,uVar2,param_3,0xffff);
            local_38 = &local_50;
            std::vector<std::string,std::allocator<std::string>>::__destroy_vector::
            operator()[abi_ne190102_((__destroy_vector *)&local_38);
            (**(code **)(*(long *)this_00 + 0x38))(this_00);
            return this;
          }
        }
        uVar2 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar2,4,"%s::%s: Didn\'t find a matching embedded ftab\n","ACFUFTABFile","create"
                  );
        local_38 = &local_50;
        std::vector<std::string,std::allocator<std::string>>::__destroy_vector::
        operator()[abi_ne190102_((__destroy_vector *)&local_38);
      }
      if (param_3 < 3) {
        *(uint *)(this_00 + 0x40) = param_3;
        uVar2 = ACFULogging::getLogInstance();
        pcVar3 = "%s::%s: Object initialized!\n";
        uVar4 = 4;
      }
      else {
        uVar2 = ACFULogging::getLogInstance();
        pcVar3 = "%s::%s: invalid optimization mask\n";
        uVar4 = 2;
      }
      ACFULogging::handleMessage(uVar2,uVar4,pcVar3,"ACFUFTABFile","create");
      goto LAB_002184db;
    }
    (**(code **)(*(long *)this_00 + 0x38))(this_00);
    pcVar3 = "%s::%s: failed to open file\n";
  }
  else {
    ~ACFUFTABFile((ACFUFTABFile *)this_00);
    operator_delete(this_00);
    pcVar3 = "%s::%s: function does not support memory optimization flow\n";
  }
  uVar2 = ACFULogging::getLogInstance();
  this_00 = (ACFUFile *)0x0;
  ACFULogging::handleMessage(uVar2,2,pcVar3,"ACFUFTABFile","create");
LAB_002184db:
  *(ACFUFile **)this = this_00;
  return this;
}


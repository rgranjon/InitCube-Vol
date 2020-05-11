#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

bool Sauvegarde::enregistrerMesure(Mesure mesure) {
    ///////*EXEMPLE 1*/
    //    fstream lecture_file("fichier.xml", ios::in);
    //    if (lecture_file.is_open()) {
    //        string line;
    //        while (getline(lecture_file, line)) {
    //            cout << line << endl;
    //        }
    //        cout << "Fin de la lecture de données du fichier" << endl;
    //        lecture_file.close();
    //    } else {
    //        cout << "Erreur d'ouverture du fichier" << endl;
    //    }

    ///////*EXEMPLE 2*/
    //    pugi::xml_document doc;
    //    pugi::xml_parse_result result = doc.load_file("xgconsole.xml");
    //    if (!result)
    //        return -1;
    //    for (pugi::xml_node tool : doc.child("Profile").child("Tools").children("Tool")) {
    //        int timeout = tool.attribute("Timeout").as_int();
    //        if (timeout > 0)
    //            std::cout << "Tool " << tool.attribute("Filename").value() << " has timeout " << timeout << "\n";
    //    }

    ///////*EXEMPLE 3*/
    //    pugi::xml_document doc;
    //    pugi::xml_parse_result result = doc.load_string(source);
    //
    //    if (result) {
    //        std::cout << "XML [" << source << "] parsed without errors, attr value: [" << doc.child("node").attribute("attr").value() << "]\n\n";
    //    } else {
    //        std::cout << "XML [" << source << "] parsed with errors, attr value: [" << doc.child("node").attribute("attr").value() << "]\n";
    //        std::cout << "Error description: " << result.description() << "\n";
    //        std::cout << "Error offset: " << result.offset << " (error at [..." << (source + result.offset) << "]\n\n";
    //    }

    //    /*ACCES AUX DONNEES DU DOCUMENT*/
    ///////*EXEMPLE 1*/
    //    for (pugi::xml_node tool = tools.child("Tool"); tool; tool = tool.next_sibling("Tool")) {
    //        std::cout << "Tool " << tool.attribute("Filename").value();
    //        std::cout << ": AllowRemote " << tool.attribute("AllowRemote").as_bool();
    //        std::cout << ", Timeout " << tool.attribute("Timeout").as_int();
    //        std::cout << ", Description '" << tool.child_value("Description") << "'\n";
    //    }
    ///////*EXEMPLE 2*/
    //    std::cout << "Tool for *.dae generation: " << tools.find_child_by_attribute("Tool", "OutputFileMasks", "*.dae").attribute("Filename").value() << "\n";
    //
    //    for (pugi::xml_node tool = tools.child("Tool"); tool; tool = tool.next_sibling("Tool")) {
    //        std::cout << "Tool " << tool.attribute("Filename").value() << "\n";
    //    }
    ///////*EXEMPLE 3*/
    //    for (pugi::xml_node_iterator it = tools.begin(); it != tools.end(); ++it) {
    //        std::cout << "Tool:";
    //
    //        for (pugi::xml_attribute_iterator ait = it->attributes_begin(); ait != it->attributes_end(); ++ait) {
    //            std::cout << " " << ait->name() << "=" << ait->value();
    //        }
    //
    //        std::cout << std::endl;
    //    }
    ///////*EXEMPLE 4*/
    //    for (pugi::xml_node tool : tools.children("Tool")) {
    //        std::cout << "Tool:";
    //
    //        for (pugi::xml_attribute attr : tool.attributes()) {
    //            std::cout << " " << attr.name() << "=" << attr.value();
    //        }
    //
    //        for (pugi::xml_node child : tool.children()) {
    //            std::cout << ", child " << child.name();
    //        }
    //
    //        std::cout << std::endl;
    //    }
    //
    ///////*EXEMPLE 5*/
    //    struct simple_walker : pugi::xml_tree_walker {
    //
    //        virtual bool for_each(pugi::xml_node& node) {
    //            for (int i = 0; i < depth(); ++i) std::cout << "  "; // indentation
    //
    //            std::cout << node_types[node.type()] << ": name='" << node.name() << "', value='" << node.value() << "'\n";
    //
    //            return true; // continue traversal
    //        }
    //    };
    //    simple_walker walker;
    //    doc.traverse(walker);

    //    /*MODIFICATION DES DONNEES DU DOCUMENT*/
    //    pugi::xml_node node = doc.child("node");
    //    // change node name
    //    std::cout << node.set_name("notnode");
    //    std::cout << ", new node name: " << node.name() << std::endl;
    //    // change comment text
    //    std::cout << doc.last_child().set_value("useless comment");
    //    std::cout << ", new comment text: " << doc.last_child().value() << std::endl;
    //    // we can't change value of the element or name of the comment
    //    std::cout << node.set_value("1") << ", " << doc.last_child().set_name("2") << std::endl;
    //    pugi::xml_attribute attr = node.attribute("id");
    //    // change attribute name/value
    //    std::cout << attr.set_name("key") << ", " << attr.set_value("345");
    //    std::cout << ", new attribute: " << attr.name() << "=" << attr.value() << std::endl;
    //    // we can use numbers or booleans
    //    attr.set_value(1.234);
    //    std::cout << "new attribute value: " << attr.value() << std::endl;
    //    // we can also use assignment operators for more concise code
    //    attr = true;
    //    std::cout << "final attribute value: " << attr.value() << std::endl;
    //    // add node with some name
    //    pugi::xml_node node = doc.append_child("node");
    //    // add description node with text child
    //    pugi::xml_node descr = node.append_child("description");
    //    descr.append_child(pugi::node_pcdata).set_value("Simple node");
    //    // add param node before the description
    //    pugi::xml_node param = node.insert_child_before("param", descr);
    //    // add attributes to param node
    //    param.append_attribute("name") = "version";
    //    param.append_attribute("value") = 1.1;
    //    param.insert_attribute_after("type", param.attribute("name")) = "float";
    //    // remove description node with the whole subtree
    //    pugi::xml_node node = doc.child("node");
    //    node.remove_child("description");
    //    // remove id attribute
    //    pugi::xml_node param = node.child("param");
    //    param.remove_attribute("value");
    //    // we can also remove nodes/attributes by handles
    //    pugi::xml_attribute id = param.attribute("name");
    //    param.remove_attribute(id);

    //    /*ENREGISTREMENT DU DOCUMENT*/
    //    // save document to file
    //    std::cout << "Saving result: " << doc.save_file("save_file_output.xml") << std::endl;
    //    // save document to standard output
    //    std::cout << "Document:\n";
    //    doc.save(std::cout);

    return true; // Pour retourner un booléen
}

bool Sauvegarde::ajouterAMission(Mesure mesure) {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    return 0;
}
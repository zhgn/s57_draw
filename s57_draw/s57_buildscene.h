#ifndef S57_BuildScene_H
#define S57_BuildScene_H

#include <QGraphicsScene>

class S57_BuildScene
{
    S57_BuildScene(const S57_BuildScene &) {}
    S57_BuildScene & operator = (const S57_BuildScene &) { return (* this); }
public:
    S57_BuildScene();
    ~S57_BuildScene();
	void clear();
	void setScene(QGraphicsScene * _scene);
	void build(const QString & _file_name);
	void render();
	void updateVisibility(double _scale, bool _exact = false);
	int itemsCount() const;
private:
	struct Data;
	Data * d;
};

#endif // S57_BuildScene_H